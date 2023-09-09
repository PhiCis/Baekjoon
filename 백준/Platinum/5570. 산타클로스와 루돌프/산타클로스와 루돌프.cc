#include<bits/stdc++.h>
using namespace std;

int n, m, a[11][11];
pair<int, int> s;
vector<pair<int, int> > h;
vector<pair<int, int> > en;
int st[11][11];
int pnt, cnt;
map<pair<int, pair<int, int> > , int> M;

int f(int bit, pair<int, int> now)
{
	if(M[{bit, now}]>0) return M[{bit, now}];
	if(M[{bit, now}]==-1) return 0;
	
	if(bit==(1<<h.size())-1) return st[now.first][now.second];
	int ret = 0, pnt;
	pnt = 1;
	while(now.first+pnt<=n)
	{
		if(a[now.first+pnt][now.second]>=0&&(~bit&(1<<a[now.first+pnt][now.second])))
		{
			ret+=f((bit|(1<<a[now.first+pnt][now.second])), {now.first+pnt, now.second});
			break;
		}
		pnt++;
	}
	pnt = 1;
	while(now.first-pnt>0)
	{
		if(a[now.first-pnt][now.second]>=0&&(~bit&(1<<a[now.first-pnt][now.second])))
		{
			ret+=f(bit|(1<<a[now.first-pnt][now.second]), {now.first-pnt, now.second});
			break;
		}
		pnt++;
	}
	pnt = 1;
	while(now.second+pnt<=m)
	{
		if(a[now.first][now.second+pnt]>=0&&(~bit&(1<<a[now.first][now.second+pnt])))
		{
			ret+=f(bit|(1<<a[now.first][now.second+pnt]), {now.first, now.second+pnt});
			break;
		}
		pnt++;
	}
	pnt = 1;
	while(now.second-pnt>0)
	{
		if(a[now.first][now.second-pnt]>=0&&(~bit&(1<<a[now.first][now.second-pnt])))
		{
			ret+=f(bit|(1<<a[now.first][now.second-pnt]), {now.first, now.second-pnt});
			break;
		}
		pnt++;
	}
	if(ret==0) M[{bit, now}]=-1;
	else M[{bit, now}]=ret;
	return ret;
}

int main()
{
	scanf("%d%d", &m, &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]==0) a[i][j]=-1;
			else if(a[i][j]==1) a[i][j]=h.size(), h.push_back({i, j});
			else if(a[i][j]==2) s={i, j}, a[i][j]=-1;
		}
	}
	pnt = 1, cnt = 0;
	while(s.first+pnt<=n)
	{
		if(a[s.first+pnt][s.second]>=0)
		{
			if(cnt==0) en.push_back({s.first+pnt, s.second});
			st[s.first+pnt][s.second]=1;
			cnt++;
		}
		pnt++;
	}
	pnt = 1, cnt = 0;
	while(s.first-pnt>0)
	{
		if(a[s.first-pnt][s.second]>=0)
		{
			if(cnt==0) en.push_back({s.first-pnt, s.second});
			st[s.first-pnt][s.second]=1;
			cnt++;
		}
		pnt++;
	}
	pnt = 1, cnt = 0;
	while(s.second+pnt<=m)
	{
		if(a[s.first][s.second+pnt]>=0)
		{
			if(cnt==0) en.push_back({s.first, s.second+pnt});
			st[s.first][s.second+pnt]=1;
			cnt++;
		}
		pnt++;
	}
	pnt = 1, cnt = 0;
	while(s.second-pnt>0)
	{
		if(a[s.first][s.second-pnt]>=0)
		{
			if(cnt==0) en.push_back({s.first, s.second-pnt});
			st[s.first][s.second-pnt]=1;
			cnt++;
		}
		pnt++;
	}
	int ans = 0;
	for(auto now:en)
	{
		ans+=f(1<<(a[now.first][now.second]), now);
	}
	printf("%d", ans);
}