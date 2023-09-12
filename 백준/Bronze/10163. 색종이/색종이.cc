#include<bits/stdc++.h>
using namespace std;

int n;
int a, b, c, d;
int ans[110];
int A[1010][1010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		for(int j=a;j<a+c;j++)
		{
			for(int k=b;k<b+d;k++)
			{
				A[j][k]=i;
			}
		}
	}
	for(int i=0;i<=1000;i++)
	{
		for(int j=0;j<=1000;j++)
		{
			ans[A[i][j]]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", ans[i]);
	}
}