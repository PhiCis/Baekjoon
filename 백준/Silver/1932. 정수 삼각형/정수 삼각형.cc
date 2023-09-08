#include<bits/stdc++.h>
using namespace std;
int n, a[1010][1010], s[1010][1010];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int j=1;j<=n;j++)
	{
		s[n][j]=a[n][j];
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			s[i][j]=max(s[i+1][j], s[i+1][j+1])+a[i][j];
		}
	}
	printf("%d", s[1][1]);
}