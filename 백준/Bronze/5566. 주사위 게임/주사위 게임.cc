#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010], b;
int x = 1;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b;
		x += b;
		if(x>=n)
		{
			cout<<i;
			return 0;
		}
		x += a[x];
		if(x>=n)
		{
			cout<<i;
			return 0;
		}
	}
}