#include<stdio.h>
#include<queue>
using namespace std;
queue<int> q;
int cnt;
int n, m, x, y, a[101][101], c[101];
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &x, &y);
		a[x][y]=a[y][x]=1;
	}
	q.push(1);
	c[1]=1;
	while(!q.empty())
	{
		int p=q.front();
		q.pop();
		for(int i=1;i<=n;i++)
		{
			if(a[p][i]==1&&c[i]==0)
			{
				c[i]=1;
				q.push(i);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
}