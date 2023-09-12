#include<bits/stdc++.h>
using namespace std;

long long r(long long a)
{
	long long s=0, e=2e9;
	long long ans=0;
	while(s<=e)
	{
		long long m=s+e>>1;
		if(m*m<=a) ans=m, s=m+1;
		else e=m-1;
	}
	return ans;
}

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long A=r(b)-r(a);
	long long B=b-a;
	if(!A) printf("0");
	else printf("%lld/%lld", A/__gcd(A, B), B/__gcd(A, B));
}