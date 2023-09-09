#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int N, M;
vector<int> G[20020];
int visited[20020];
queue<pair<int, int> > q;
int Mv=INF, Md, cnt;

int main()
{
	scanf("%d%d", &N, &M);
	for(int i=1;i<=M;i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		G[x].push_back(y);
		G[y].push_back(x);
	}
	visited[1]=1;
	q.push({1, 0});
	while(!q.empty())
	{
		int nowv=q.front().first;
		int nowd=q.front().second;
		//printf(":%d %d\n", nowv, nowd);
		q.pop();
		
		if(nowd==Md)
		{
			cnt++;
			Mv=min(Mv, nowv);
		}
		if(nowd>Md)
		{
			cnt=1;
			Md=nowd;
			Mv=nowv;
		}
		for(auto next:G[nowv])
		{
			if(visited[next]) continue;
			visited[next]=1;
			q.push({next, nowd+1});
		}
	}
	printf("%d %d %d", Mv, Md, cnt);
}