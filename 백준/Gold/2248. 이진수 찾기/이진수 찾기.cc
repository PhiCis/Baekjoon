#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, l, k;
int a[100][100];

main()
{
	scanf("%lld%lld%lld", &n, &l, &k);
	for(int j=0;j<=l;j++)
	{
		a[0][j]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=l;j++)
		{
			a[i][j]=a[i-1][j]+(j==0?0:a[i-1][j-1]);
		}
	}
	for(int i=n;i>=1;i--)
	{
		if(a[i-1][l]>=k)
		{
			printf("0");
		}
		else
		{
			printf("1");
			k-=a[i-1][l];
			l--;
		}
	}
}