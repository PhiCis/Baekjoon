#include<bits/stdc++.h>
using namespace std;

int n, p[60], m, ans, root;
vector<int> a[60];
int d[60];

int DFS(int k)
{
	if(a[k].size()==0) return d[k]=1;
	else
	{
		for(auto l:a[k])
		{
			d[k]+=DFS(l);
		}
		return d[k];
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &p[i]);
		if(p[i]!=-1) a[p[i]].push_back(i);
		else root = i;
	}
	DFS(root);
	scanf("%d", &m);
	for(int i=0;i<n;i++)
	{
		if(a[i].size()==0) ans++;
	}
	ans-=d[m];
	if(a[p[m]].size()==1) ans++;
	printf("%d", ans);
	
}