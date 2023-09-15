#include<bits/stdc++.h>
using namespace std;

int n, a[1010];

int main()
{
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=n-2;i>=1;i--)
		{
			if(a[i]-a[i+1]!=a[i+1]-a[i+2])
			{
				cout<<i+1<<"\n";
				goto skip;
			}
		}
		cout<<1<<"\n";
		skip:;
	}
}