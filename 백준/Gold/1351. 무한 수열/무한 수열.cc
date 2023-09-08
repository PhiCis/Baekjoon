#include<bits/stdc++.h>
using namespace std;

map<long long, long long> m;
long long n, p, q;
long long f(long long n)
{
	if(m[n]) return m[n];
	if(n==0) return m[0]=1;
	return m[n]=f(n/p)+f(n/q);
	
}
int main()
{
	scanf("%lld%lld%lld", &n, &p, &q);
	printf("%lld", f(n));
}