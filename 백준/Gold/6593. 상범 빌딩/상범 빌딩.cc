#include<bits/stdc++.h>
using namespace std;

int d[6][3]={1, 0, 0, -1, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 1, 0, 0, -1};

int a, b, c;
int A[50][50][50];
int dp[50][50][50];

int main()
{
	while(1)
	{
		scanf("%d%d%d", &a, &b, &c);
		if(a==0) return 0;
		queue<vector<int> > q;
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				for(int k=1;k<=c;k++)
				{
					dp[i][j][k]=0;
					scanf(" %c", &A[i][j][k]);
					if(A[i][j][k]=='S')
					{
						q.push({i, j, k});
						dp[i][j][k]=1;
					}
				}
			}
		}
		while(!q.empty())
		{
			vector<int> now = q.front();
			q.pop();
			if(A[now[0]][now[1]][now[2]]=='E')
			{
				printf("Escaped in %d minute(s).\n", dp[now[0]][now[1]][now[2]]-1);
				goto skip;
			}
			for(int i=0;i<6;i++)
			{
				vector<int> next = now;
				for(int j=0;j<3;j++)
				{
					next[j]+=d[i][j];
				}
				if(next[0]>a||next[0]<=0) continue;
				if(next[1]>b||next[1]<=0) continue;
				if(next[2]>c||next[2]<=0) continue;
				if(A[next[0]][next[1]][next[2]]=='#') continue;
				if(dp[next[0]][next[1]][next[2]]) continue;
				dp[next[0]][next[1]][next[2]]=dp[now[0]][now[1]][now[2]]+1;
				q.push(next);
			}
		}
		printf("Trapped!\n");
		skip:;
	}
}