#include<stdio.h>
int n, a[300][300];
void f(int x, int y, int k)
{
	int tmp=a[x][y];
	for(int i=x;i<x+k;i++)
	{
		for(int j=y;j<y+k;j++)
		{
			if(a[i][j]!=tmp)
			{
				printf("(");
				f(x, y, k/2);
				f(x, y+k/2, k/2);
				f(x+k/2, y, k/2);
				f(x+k/2, y+k/2, k/2);
				printf(")");
				return;
			}
		}
	}
	printf("%d", tmp);
	return;
}
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
	f(1, 1, n);
}