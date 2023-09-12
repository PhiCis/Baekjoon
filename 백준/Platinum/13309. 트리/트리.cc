#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> adj[200020];
vector<int> seg[200020];
int sz[200020], par[200020];

int DFS(int u, int p)
{
	sz[u]=1;
	for(auto v:adj[u])
	{
		if(v!=p)
		{
			sz[u]+=DFS(v, u);
		}
	}
	return sz[u];
}

vector<int> chain[200020];
int depth[200020], chain_number[200020], chain_index[200020];

void HLD(int u, int p, int cur_chain, int d)
{
	depth[u]=d;
	chain_number[u]=cur_chain;
	chain_index[u]=chain[cur_chain].size();
	chain[cur_chain].push_back(u);
	
	int heavy = -1;
	for(auto v:adj[u])
	{
		if(v!=p&&(heavy==-1||sz[v]>sz[heavy])) heavy = v;
	}
	if(heavy!=-1)
	{
		HLD(heavy, u, cur_chain, d);
	}
	for(auto v:adj[u])
	{
		if(v!=p&&v!=heavy) HLD(v, u, v, d+1);
	}
}

void su(vector<int>& seg, int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		seg[id]=v;
		return;
	}
	int m=s+e>>1;
	su(seg, id*2, s, m, t, v);
	su(seg, id*2+1, m+1, e, t, v);
	seg[id]=min(seg[id*2], seg[id*2+1]);
}

int sq(vector<int>& seg, int id, int s, int e, int l, int r)
{
	if(r<s||e<l||l>r) return 1;
	if(l<=s&&e<=r)
	{
		return seg[id];
	}
	int m=s+e>>1;
	return min(sq(seg, id*2, s, m, l, r), sq(seg, id*2+1, m+1, e, l, r));
}

bool query(int u, int v)
{
	while(chain_number[u]!=chain_number[v])
	{
		if(depth[u]>depth[v])
		{
			if(sq(seg[chain_number[u]], 1, 0, chain[chain_number[u]].size()-1, 0, chain_index[u])==0) return false;
			u=par[chain_number[u]];
		}
		else
		{
			if(sq(seg[chain_number[v]], 1, 0, chain[chain_number[v]].size()-1, 0, chain_index[v])==0) return false;
			v=par[chain_number[v]];
		}
	}
	if(chain_index[u]>chain_index[v]) swap(u, v);
	if(sq(seg[chain_number[u]], 1, 0, chain[chain_number[u]].size()-1, chain_index[u]+1, chain_index[v])==0) return false;
	return true;
}

int main()
{
	int N, Q;
	scanf("%d%d", &N, &Q);
	for(int i=2;i<=N;i++)
	{
		scanf("%d", &par[i]);
		adj[i].push_back(par[i]);
		adj[par[i]].push_back(i);
	}
	DFS(1, 0);
	HLD(1, 0, 1, 0);
	for(int i=1;i<=N;i++)
	{
		seg[i].resize(chain[i].size()*4);
		
		for(int j=0;j<chain[i].size();j++)
		{
			su(seg[i], 1, 0, chain[i].size()-1, j, 1);
		}
	}
	while(Q--)
	{
		int b, c, d;
		scanf("%d%d%d", &b, &c, &d);
		if(d==0)
		{
			printf(query(b, c)?"YES\n":"NO\n");
		}
		if(d==1)
		{
			if(query(b, c))
			{
				printf("YES\n");
				su(seg[chain_number[b]], 1, 0, chain[chain_number[b]].size()-1, chain_index[b], 0);
			}
			else
			{
				printf("NO\n");
				su(seg[chain_number[c]], 1, 0, chain[chain_number[c]].size()-1, chain_index[c], 0);
			}
		}
	}
}