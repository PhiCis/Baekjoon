#include<bits/stdc++.h>
using namespace std;

long long a, b=1;
long long c, d;
int main()
{
	long long n;
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &d);
		c=1;
		a=a*d+b*c;
		b=b*d;
		long long g=__gcd(a, b);
		a/=g;
		b/=g;
	}
	printf("%lld/%lld", b, a);
}