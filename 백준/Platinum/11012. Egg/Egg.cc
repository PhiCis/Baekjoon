#include <bits/stdc++.h>
using namespace std;

struct Node{
  int l, r, val;
};

int head[100002]; // head[i] : i번째 행을 의미하는 segment tree의 root
vector<Node> node(2); // 0번째 : dummy node, 1번째 : root
vector<int> yidx[100002];

void init(int idx, int s, int e)
{
	if(s==e) return;
	int m=s+e>>1;
	node.push_back({0, 0, 0});
	node[idx].l=node.size()-1;
	init(node[idx].l, s, m);
	node.push_back({0, 0, 0});
	node[idx].r=node.size()-1;
	init(node[idx].r, m+1, e);
}
void upd(int idx, int s, int e, int t, int v)
{
	if(s==e) return;
	int m=s+e>>1;
	if(t<=m)
	{
		int lidx=node[idx].l;
		node.push_back({node[lidx].l, node[lidx].r, node[lidx].val+v});
		node[idx].l=node.size()-1;
		upd(node[idx].l, s, m, t, v);
	}
	else
	{
		int ridx=node[idx].r;
		node.push_back({node[ridx].l, node[ridx].r, node[ridx].val+v});
		node[idx].r=node.size()-1;
		upd(node[idx].r, m+1, e, t, v);
	}
}

int query(int idx, int s, int e, int i, int j)
{
	if(j<s||i>e) return 0;
	else if(i<=s&&e<=j) return node[idx].val;
	int m=s+e>>1;
	return query(node[idx].l, s, m, i, j)+query(node[idx].r, m+1, e, i, j);
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		node.resize(2);
		node[1]={0, 0, 0};
		fill(head, head+100002, 0);
		head[0]=1;
		init(1, 1, 100001);
		int n, m;
		scanf("%d%d", &n, &m);
		for(int i=1;i<=100001;i++)
		{
			yidx[i].clear();
		}
		while(n--)
		{
			int x, y;
			scanf("%d%d", &x, &y);
			x++; y++;
			yidx[x].push_back(y);
		}
		for(int i=1;i<=100001;i++)
		{
			if(head[i]==0)
			{
				node.push_back(node[head[i-1]]);
				head[i]=node.size()-1;
			}
			for(auto y:yidx[i])
			{
				node[head[i]].val++;
				upd(head[i], 1, 100001, y, 1);
			}
		}
		int tot=0;
		while(m--)
		{
			int l, r, b, t;
			scanf("%d%d%d%d", &l, &r, &b, &t);
			l++;r++;b++;t++;
			tot+=query(head[r], 1, 100001, b, t)-query(head[l-1], 1, 100001, b, t);
		}
		printf("%d\n", tot);
	}
}