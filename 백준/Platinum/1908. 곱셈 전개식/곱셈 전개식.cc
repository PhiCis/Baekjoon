#include<bits/stdc++.h>
using namespace std;
#define mod 10000
typedef long long ll;


ll power(ll a, ll b)
{
	if(b==0) return 1;
	ll tmp=power(a, b/2);
	if(b&1) return tmp*tmp%mod*a%mod;
	else return tmp*tmp%mod;
}

ll a[12];
ll e[12];

int main()
{
	e[0]=1;
	for(int i=1;i<12;i++)
	{
		e[i]=e[i-1]*10;
	}
	/*
	+: 2^n-1
	x: n
	a: n * 2^(n-1)
	number: sum * (2^(n-1) + 1) - 1
	(): 2(n-1) 
	*/
	ll n;
	cin>>n;
	ll tmp=n;
	ll cnt=0; 
	ll sum=0;
	while(n)
	{
		a[cnt]=n%10;
		n/=10;
		cnt++;
	}
	n=tmp;
	for(int i=1;i<cnt;i++)
	{
		sum += i * 9 * e[i-1];
	}
	sum += cnt * (n - e[cnt-1] + 1);
//	cout<<sum<<"\n";
	cout<<(power(2, n) - 1 + n + n * power(2, n-1) + sum%mod * (power(2, n-1) + 1) - 1 + 2 * n - 2 + mod)%mod;
}