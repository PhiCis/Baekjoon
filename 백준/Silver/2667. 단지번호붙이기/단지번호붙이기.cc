#include<bits/stdc++.h>
using namespace std;
queue<pair<int, int> > q;
int n;
int a[110][110], c[110][110];
int cnt;
int chk[1000];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1&&c[i][j]==0)
			{
				cnt++;
				c[i][j]=cnt;
				q.push(make_pair(i, j));
				chk[cnt]++;
				while(!q.empty())
				{
					int pi, pj;
					pi=(q.front()).first;
					pj=(q.front()).second;
					//printf("%d\n", q.size());
					q.pop();
					if(a[pi][pj+1]==1&&c[pi][pj+1]==0)
					{
						c[pi][pj+1]=cnt;
						q.push(make_pair(pi, pj+1));
						chk[cnt]++;
					}
					if(a[pi][pj-1]==1&&c[pi][pj-1]==0)
					{
						c[pi][pj-1]=cnt;
						q.push(make_pair(pi, pj-1));
						chk[cnt]++;
					}
					if(a[pi+1][pj]==1&&c[pi+1][pj]==0)
					{
						c[pi+1][pj]=cnt;
						q.push(make_pair(pi+1, pj));
						chk[cnt]++;
					}
					if(a[pi-1][pj]==1&&c[pi-1][pj]==0)
					{
						c[pi-1][pj]=cnt;
						q.push(make_pair(pi-1, pj));
						chk[cnt]++;
					}
				}
			}
		}
	}
	sort(chk+1, chk+cnt+1);
	printf("%d\n", cnt);
	for(int i=1;i<=cnt;i++)
	{
		printf("%d\n", chk[i]);
	}
}