#include<bits/stdc++.h>
using namespace std;

int a[10010];

int n, k, ans;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>k;
		a[k]++;
	}
	for(int i=0;i<=10000;i++)
	{
		ans=max(ans, a[i]);
	}
	for(int i=0;i<=10000;i++)
	{
		if(ans==a[i])
		{
			cout<<i;
			return 0;
		}
	}
}