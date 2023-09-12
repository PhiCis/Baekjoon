#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int n;
int s[110][110], f[110];
main()
{
	f[0]=f[1]=1;
	for(int i=2;i<=100;i++)
	{
		f[i]=f[i-1]*i%mod;
	}
	s[0][0]=1;
	for(int i=1;i<=100;i++)
	{
		for(int j=1;j<=i;j++)
		{
			s[i][j]=(s[i-1][j-1]+j*s[i-1][j])%mod;
		}
	}
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a, b;
		cin>>a>>b;
		cout<<"Case #"<<i<<": "<<s[b][a]*f[a]%mod<<"\n";
	}
}