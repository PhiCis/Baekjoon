#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

bool p(ll n)
{
	if(n==1) return false;
	if(n==2) return true;
	if(n%2==0) return false;
	for(ll i=3;i*i<=n;i+=2)
	{
		if(n%i==0) return false;
	}
	return true;
}
ll f(ll n)
{
	ll tmp=0;
	while(n)
	{
		tmp*=10;
		if(n%10==3||n%10==4||n%10==7) return 1;
		else if(n%10==6) tmp+=9;
		else if(n%10==9) tmp+=6;
		else tmp+=n%10;
		n/=10;
	}
//	printf("%lld\n", tmp);
	return tmp;
}
int main()
{
	scanf("%lld", &n);
	if(p(n) & p(f(n))) printf("yes");
	else printf("no");
}