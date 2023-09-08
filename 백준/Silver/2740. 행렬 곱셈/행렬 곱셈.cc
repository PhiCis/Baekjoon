#include<bits/stdc++.h>
int a, b, c, d, A[110][110], B[110][110], tmp[110][110];
int main()
{
	scanf("%d%d", &a, &b);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	scanf("%d%d", &c, &d);
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<d;j++)
		{
			for(int k=0;k<b;k++)
			{
				tmp[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ", tmp[i][j]);
		}
		printf("\n");
	}
}