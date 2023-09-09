#include<bits/stdc++.h>
using namespace std;

int n;
char a[55][55];

int ans;

int f()
{
	int ret = 0;
	for(int i=0;i<n;i++)
	{
		int tmp = 1;
		for(int j=1;j<n;j++)
		{
			if(a[i][j]!=a[i][j-1])
			{
				ret = max(ret, tmp);
				tmp=1;
			}
			else
			{
				tmp++;
			}
		}
		ret=max(ret, tmp);
	}
	for(int j=0;j<n;j++)
	{
		int tmp = 1;
		for(int i=1;i<n;i++)
		{
			if(a[i][j]!=a[i-1][j])
			{
				ret = max(ret, tmp);
				tmp=1;
			}
			else
			{
				tmp++;
			}
		}
		ret=max(ret, tmp);
	}
	return ret;
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+1<n){
				swap(a[i][j], a[i+1][j]);
				ans = max(ans, f());
				swap(a[i][j], a[i+1][j]);
			}
			if(j+1<n){
				swap(a[i][j], a[i][j+1]);
				ans = max(ans, f());
				swap(a[i][j], a[i][j+1]);
			}
		}
	}
	printf("%d", ans);
}