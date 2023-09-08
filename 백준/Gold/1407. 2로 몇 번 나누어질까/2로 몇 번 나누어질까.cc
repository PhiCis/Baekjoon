#include<bits/stdc++.h>
using namespace std;

long long f(long long n)
{
	long long ret = 0;
	for(int i=0;i<=60;i++)
	{
		ret+=(1ll<<i)*((n>>i)-(n>>(i+1)));
	}
	return ret;
}

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld", f(b)-f(a-1));
}