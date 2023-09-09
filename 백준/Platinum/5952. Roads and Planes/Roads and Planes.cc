#include<bits/stdc++.h>
using namespace std;
int ans[30030];
int chk[30030];
vector<int> g1[30030];
vector<pair<int, int> > adj1[30030];
vector<int> g2[30030];
vector<pair<int, int> > adj2[30030];
int in[30030];
queue<int> q;

vector<int> G[30030]; //i번째 그룹에 속한 인덱스들 

int pnt; //그룹의 개수 

void upd(int now)
{
	priority_queue<pair<int, int> > pq;
	for(auto i:G[now])
	{
		if(ans[i]!=2e9)
		{
			pq.push({-ans[i], i});
		}
	}
	if(pq.empty()) return;
	while(!pq.empty())
	{
		int nowdist = -pq.top().first;
		int nownode = pq.top().second;
		pq.pop();
		if(ans[nownode] < nowdist) continue;
		//d[nownode] = nowdist;
		for(auto next : adj1[nownode])
		{
			int nextdist = ans[nownode] + next.second;
			if(nextdist < ans[next.first])
			{
				ans[next.first] = nextdist;
				pq.push({-nextdist, next.first});
			}
		}
	}
	for(auto i:G[now])
	{
		for(auto j:adj2[i])
		{
			ans[j.first]=min(ans[j.first], ans[i]+j.second);
		}
	}
}

void dfs(int i, int cnt)
{
	for(auto j:g1[i])
	{
		if(chk[j]) continue;
		chk[j]=cnt;
		G[cnt].push_back(j);
		dfs(j, cnt);
	}
}

int main()
{
	//1. 입력 
	int n, m1, m2, s;
	scanf("%d%d%d%d", &n, &m1, &m2, &s);
	//2. 초기화 
	for(int i=1;i<=n;i++)
	{
		ans[i]=2e9;
	}
	ans[s]=0;
	//3. 입력 
	for(int i=0;i<m1;i++)
	{
		int u, v, c;
		scanf("%d%d%d", &u, &v, &c);
		//양방향 
		g1[u].push_back(v);
		g1[v].push_back(u);
		adj1[u].push_back({v, c});
		adj1[v].push_back({u, c});
	}
	//4. 모든 정점을 그룹화
	for(int i=1;i<=n;i++)
	{
		if(chk[i]==0)
		{
			chk[i]=++pnt;
			G[pnt].push_back(i);
			dfs(i, pnt);
		}
	}
	//5. 입력 
	for(int i=0;i<m2;i++)
	{
		int u, v, c;
		scanf("%d%d%d", &u, &v, &c);
		g2[chk[u]].push_back(chk[v]); //그룹 간의 연결 
		adj2[u].push_back({v, c});
		in[chk[v]]++;
	}
	//6. 그룹 간의 연결 관계
	for(int i=1;i<=pnt;i++)
	{
		if(in[i]==0)
		{
			q.push(i);
		}
	}
	while(!q.empty())
	{
		int now=q.front(); q.pop();
		upd(now);
		for(auto next:g2[now])
		{
			in[next]--;
			if(in[next]==0) q.push(next);
		}
	}
	//step 3: 
	for(int i=1;i<=n;i++)
	{
		if(ans[i]==2e9)
		{
			printf("NO PATH\n");
		}
		else
		{
			printf("%d\n", ans[i]);
		}
	}
}