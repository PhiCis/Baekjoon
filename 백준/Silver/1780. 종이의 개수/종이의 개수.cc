#include<stdio.h>
int n, a[3030][3030], c[3];
void f(int x, int y, int k)
{
	int tmp=a[x][y];
	for(int i=x;i<x+k;i++)
	{
		for(int j=y;j<y+k;j++)
		{
			if(a[i][j]!=tmp)
			{
				f(x, y, k/3);
				f(x, y+k/3, k/3);
				f(x, y+2*k/3, k/3);
				f(x+k/3, y, k/3);
				f(x+k/3, y+k/3, k/3);
				f(x+k/3, y+2*k/3, k/3);
				f(x+2*k/3, y, k/3);
				f(x+2*k/3, y+k/3, k/3);
				f(x+2*k/3, y+2*k/3, k/3);
				return;
			}
		}
	}
	c[(tmp+3)%3]++;
	return;
}
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	f(1, 1, n);
	printf("%d\n%d\n%d", c[2], c[0], c[1]);
}