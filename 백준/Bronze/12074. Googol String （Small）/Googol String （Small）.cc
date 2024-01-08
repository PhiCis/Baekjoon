#include<bits/stdc++.h>
using namespace std;

long long a[63];
int t;

int main()
{
	a[0]=1ll;
	for(int i=1;i<=62;i++) a[i]=a[i-1]*2;
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		long long n;
		cin>>n;
		cout<<"Case #"<<z<<": ";
		int ans=0;
		for(int i=61;i>=0;i--)
		{
			if(a[i]==n)
			{
				cout<<ans<<"\n";
				break;
			}
			if(a[i]<n && n<a[i+1])
			{
				n-=2*(n-a[i]);
				ans=1-ans;
			}
		}
	}
}