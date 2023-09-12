#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long f[100010];
int n, a;

int main()
{
	f[0]=1;
	for(int i=1;i<=100000;i++)
	{
		f[i]=i*f[i-1]%mod;
	}
	cin>>n;
	while(n--)
	{
		cin>>a;
		cout<<(f[a]+mod-1)%mod<<"\n";
	}
}