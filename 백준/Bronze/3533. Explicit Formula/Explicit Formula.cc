#include<bits/stdc++.h>
using namespace std;

int a[11];
int ans;

int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<=10;i++)
	{
		for(int j=i+1;j<=10;j++)
		{
			for(int k=j+1;k<=10;k++)
			{
				ans^=(a[i]|a[j]|a[k]);
			}
		}
	}
	printf("%d", ans);
}