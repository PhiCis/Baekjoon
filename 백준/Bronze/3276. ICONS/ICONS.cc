#include<bits/stdc++.h>
using namespace std;

int n, ans=10000;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i*j>=n)
			{
				ans=min(ans, i+j);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i*j>=n&&ans==i+j)
			{
				printf("%d %d", i, j);
				return 0;
			}
		}
	}
}