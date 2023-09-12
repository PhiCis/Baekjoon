#include<bits/stdc++.h>
using namespace std;

long long a[50000], ans[50000];

int main()
{
	ans[0]=1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++)
	{
		for(int j=(i+1)*2;j>=2;j--)
		{
			ans[j]=(ans[j]*a[i*2]*a[i*2+1]+ans[j-1]*(a[i*2]+a[i*2+1])+ans[j-2])%100003;
		}
		ans[1]=(ans[1]*a[i*2]*a[i*2+1]+ans[0]*(a[i*2]+a[i*2+1]))%100003;
		ans[0]=(ans[0]*a[i*2]*a[i*2+1])%100003;
	}
	if(n&1)
	{
		for(int j=n;j>=1;j--)
		{
			ans[j]=(ans[j]*a[n-1]+ans[j-1])%100003;
		}
		ans[0]=ans[0]*a[n-1]%100003;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int k;
		cin>>k;
		cout<<ans[n-k]<<"\n";
	}
}