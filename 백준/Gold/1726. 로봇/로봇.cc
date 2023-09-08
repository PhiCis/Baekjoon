#include<bits/stdc++.h>
using namespace std;

struct A{
	int a, b, c;
};

int n, m, a[110][110];
int chk[110][110][5];
queue<A> q;
int sa, sb, sc, ea, eb, ec;

int main()
{
	scanf("%d%d", &m, &n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			int x;
			scanf("%d", &x);
			a[i][j]=1-x;
		}
	}
	scanf("%d%d%d", &sa, &sb, &sc);
	chk[sa][sb][sc]=1;
	q.push({sa, sb, sc});
	scanf("%d%d%d", &ea, &eb, &ec);
	while(!q.empty())
	{
		A now = q.front();
		q.pop();
		if(now.a==ea&&now.b==eb&&now.c==ec)
		{
			printf("%d", chk[ea][eb][ec]-1);
			return 0;
		}
		if(now.c==1)
		{
			if(chk[now.a][now.b][3]==0)
			{
				chk[now.a][now.b][3]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 3});
			}
			if(chk[now.a][now.b][4]==0)
			{
				chk[now.a][now.b][4]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 4});
			}
			if(a[now.a][now.b+1]==1)
			{
				if(chk[now.a][now.b+1][now.c]==0)
				{
					chk[now.a][now.b+1][now.c]=chk[now.a][now.b][now.c]+1;
					q.push({now.a, now.b+1, now.c});
				}
				if(a[now.a][now.b+2]==1)
				{
					if(chk[now.a][now.b+2][now.c]==0)
					{
						chk[now.a][now.b+2][now.c]=chk[now.a][now.b][now.c]+1;
						q.push({now.a, now.b+2, now.c});
					}
					if(a[now.a][now.b+3]==1)
					{
						if(chk[now.a][now.b+3][now.c]==0)
						{
							chk[now.a][now.b+3][now.c]=chk[now.a][now.b][now.c]+1;
							q.push({now.a, now.b+3, now.c});
						}
					}
				}
			}
		}
		if(now.c==2)
		{
			if(chk[now.a][now.b][3]==0)
			{
				chk[now.a][now.b][3]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 3});
			}
			if(chk[now.a][now.b][4]==0)
			{
				chk[now.a][now.b][4]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 4});
			}
			if(a[now.a][now.b-1]==1)
			{
				if(chk[now.a][now.b-1][now.c]==0)
				{
					chk[now.a][now.b-1][now.c]=chk[now.a][now.b][now.c]+1;
					q.push({now.a, now.b-1, now.c});
				}
				if(a[now.a][now.b-2]==1)
				{
					if(chk[now.a][now.b-2][now.c]==0)
					{
						chk[now.a][now.b-2][now.c]=chk[now.a][now.b][now.c]+1;
						q.push({now.a, now.b-2, now.c});
					}
					if(a[now.a][now.b-3]==1)
					{
						if(chk[now.a][now.b-3][now.c]==0)
						{
							chk[now.a][now.b-3][now.c]=chk[now.a][now.b][now.c]+1;
							q.push({now.a, now.b-3, now.c});
						}
					}
				}
			}
		}
		if(now.c==3)
		{
			if(chk[now.a][now.b][1]==0)
			{
				chk[now.a][now.b][1]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 1});
			}
			if(chk[now.a][now.b][2]==0)
			{
				chk[now.a][now.b][2]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 2});
			}
			if(a[now.a+1][now.b]==1)
			{
				if(chk[now.a+1][now.b][now.c]==0)
				{
					chk[now.a+1][now.b][now.c]=chk[now.a][now.b][now.c]+1;
					q.push({now.a+1, now.b, now.c});
				}
				if(a[now.a+2][now.b]==1)
				{
					if(chk[now.a+2][now.b][now.c]==0)
					{
						chk[now.a+2][now.b][now.c]=chk[now.a][now.b][now.c]+1;
						q.push({now.a+2, now.b, now.c});
					}
					if(a[now.a+3][now.b]==1)
					{
						if(chk[now.a+3][now.b][now.c]==0)
						{
							chk[now.a+3][now.b][now.c]=chk[now.a][now.b][now.c]+1;
							q.push({now.a+3, now.b, now.c});
						}
					}
				}
			}
		}
		if(now.c==4)
		{
			if(chk[now.a][now.b][1]==0)
			{
				chk[now.a][now.b][1]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 1});
			}
			if(chk[now.a][now.b][2]==0)
			{
				chk[now.a][now.b][2]=chk[now.a][now.b][now.c]+1;
				q.push({now.a, now.b, 2});
			}
			if(a[now.a-1][now.b]==1)
			{
				if(chk[now.a-1][now.b][now.c]==0)
				{
					chk[now.a-1][now.b][now.c]=chk[now.a][now.b][now.c]+1;
					q.push({now.a-1, now.b, now.c});
				}
				if(a[now.a-2][now.b]==1)
				{
					if(chk[now.a-2][now.b][now.c]==0)
					{
						chk[now.a-2][now.b][now.c]=chk[now.a][now.b][now.c]+1;
						q.push({now.a-2, now.b, now.c});
					}
					if(a[now.a-3][now.b]==1)
					{
						if(chk[now.a-3][now.b][now.c]==0)
						{
							chk[now.a-3][now.b][now.c]=chk[now.a][now.b][now.c]+1;
							q.push({now.a-3, now.b, now.c});
						}
					}
				}
			}
		}
	}
}