#include<bits/stdc++.h>
using namespace std;
#define inf 2e9

int n, k, siz[200020], vst[200020], mind[1000010];
vector<pair<int, int> > g[200020];
queue<int> q;

int getsz(int i, int p) 
{
	siz[i]=1;
	for(auto j:g[i])
	{
		if(vst[j.first]||j.first==p) continue;
		siz[i]+=getsz(j.first, i);
	}
	return siz[i];
}

int getcnt(int i, int p, int sz)
{
	for(auto j:g[i])
	{
		if(vst[j.first]||j.first==p) continue;
		if(siz[j.first]>sz)
		{
			return getcnt(j.first, i, sz);
		}
	}
	return i;
}

int calc(int i, int p, int c, int d)
{
	int res = inf;
	if(c>k) return res;
	if(mind[k-c]!=inf)
	{
		res = mind[k-c]+d;
	}
	for(auto j:g[i])
	{
		if(vst[j.first]||j.first==p) continue;
		res = min(res, calc(j.first, i, j.second+c, d+1));
	}
	return res;
}

void upd(int i, int p, int c, int d)
{
	if(c>k) return;
	mind[c] = min(mind[c], d);
	q.push(c);
	for(auto j:g[i])
	{
		if(vst[j.first]||j.first==p) continue;
		upd(j.first, i, j.second+c, d+1);
	}
}

int dnc(int i)
{
	int sz = getsz(i, -1);
	int cnt = getcnt(i, -1, sz/2);
	int res = inf;
	
	while(!q.empty())
	{
		mind[q.front()]=inf;
		q.pop();
	}
	
	vst[cnt]=1;
	mind[0]=0;
	
	for(auto j:g[cnt])
	{
		if(vst[j.first]) continue;
		res = min(res, calc(j.first, cnt, j.second, 1));
		upd(j.first, cnt, j.second, 1);
	}
	
	for(auto j:g[cnt])
	{
		if(vst[j.first]) continue;
		res = min(res, dnc(j.first));
	}
	
	return res;
}

int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<n;i++)
	{
		int u, v, c;
		scanf("%d%d%d", &u, &v, &c);
		g[u].push_back({v, c});
		g[v].push_back({u, c});
	}
	for(int i=0;i<=k;i++)
	{
		mind[i]=inf;
	}
	
	int res = dnc(0);
	printf("%d", res==inf?-1:res);
}