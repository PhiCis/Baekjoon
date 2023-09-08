#include<bits/stdc++.h>
using namespace std;

long long ans;

void f(long long n, long long a)
{
	if(n==0) return;
	ans+=(n&1)*a;
	f(n/2, a*3);
}

int main()
{
	long long n;
	scanf("%lld", &n);
	f(n, 1);
	printf("%lld", ans);
}