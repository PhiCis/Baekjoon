#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

vector<int> p; 
int sp[1000001];
int mu[1000001];

void linear_sieve(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(!sp[i]) p.push_back(i);
		for(auto j:p)
		{
			if(i*j>n) break;
			sp[i*j]=j;
			if(i%j==0) break;
		}
	}
}

int main()
{
	linear_sieve(1000000);
	mu[1]=1;
	for(int i=2;i<=1000000;i++)
	{
		if(!sp[i]) mu[i]=-1;
		else if(i/sp[i]%sp[i]==0) mu[i]=0;
		else mu[i]=-mu[i/sp[i]];
	}
	cin.tie(0);
	long long n;
	cin>>n;
	long long ans=0, tmp;
	for(int i=1;i<=n;i++)
	{
		tmp=0;
		for(int j=1;j<=n/i;j++)
		{
			tmp+=(mod+mu[j])%mod*((n/i/j)*(n/i/j+1)/2%mod)%mod*((n/i/j)*(n/i/j+1)/2%mod)%mod*j%mod*j;
			tmp%=mod;
		}
		ans=(ans+tmp*i)%mod;
	}
	cout<<(ans+(mod-1)*(n*(n+1)/2%mod)%mod)*500000004%mod;
}