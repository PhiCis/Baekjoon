#include<bits/stdc++.h>
using namespace std;
int N;
vector<int> G[110];

int dfs(int s, int e, int* visited)
{
	if(s==e) return 1;
	visited[s]=1;
	for(auto i:G[s])
	{
		if(!visited[i])
		{
			if(dfs(i, e, visited)) return 1;
		}
	}
	return 0;
}

int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			int a;
			scanf("%d", &a);
			if(a) G[i].push_back(j);
		}
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N;j++)
		{
			int visited[110]={0};
			for(auto k:G[i])
			{
				if(dfs(k, j, visited))
				{
					printf("1 ");
					goto skip;
				}
			}
			printf("0 ");
			skip:;
		}
		printf("\n");
	}
}