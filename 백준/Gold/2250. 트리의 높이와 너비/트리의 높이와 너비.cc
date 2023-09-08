#include<bits/stdc++.h>
using namespace std;

int n, id, l[100100], r[100100], chk[100100], root;
pair<int, int> sub[100100];
pair<int, int> d[100100];
int ans, ansi;

pair<int, int> DFS(int id)
{
	int tmpl=0, tmpr=0;
	if(l[id]!=-1)
	{
		pair<int, int> tmp = DFS(l[id]);
		tmpl += tmp.first+1+tmp.second;
	}
	if(r[id]!=-1)
	{
		pair<int, int> tmp = DFS(r[id]);
		tmpr += tmp.first+1+tmp.second;
	}
	return sub[id]={tmpl, tmpr};
}

void DFS2(int id, int depth, int dis)
{
	if(d[depth].first == 0&&d[depth].second == 0)
	{
		d[depth].first = d[depth].second = dis;
	}
	if(dis<d[depth].first) d[depth].first = dis;
	if(dis>d[depth].second) d[depth].second = dis;
	if(l[id]!=-1)
	{
		DFS2(l[id], depth+1, dis-1-sub[l[id]].second);
	}
	if(r[id]!=-1)
	{
		DFS2(r[id], depth+1, dis+1+sub[r[id]].first);
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &id);
		scanf("%d%d", &l[id], &r[id]);
		if(l[id]!=-1) chk[l[id]]++;
		if(r[id]!=-1) chk[r[id]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(chk[i]==0)
		{
			root = i;
			break;
		}
	}
	DFS(root);
	DFS2(root, 1, 0);
	for(int i=1;i<=n;i++)
	{
		//printf("%d\n", d[i].second-d[i].first+1);
		if(ans<d[i].second-d[i].first+1)
		{
			ans = d[i].second-d[i].first+1;
			ansi = i;
		}
	}
	printf("%d %d", ansi, ans);
}