#include<bits/stdc++.h>
using namespace std;

int n, a[1100], b[1100], c=2e9;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		c=min(c, b[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==c)
		{
			cout<<a[i]<<" "<<b[i];
		}
	}
}