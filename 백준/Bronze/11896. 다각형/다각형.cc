#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(a&1) a-=1;
	else a-=2;
	a/=2;
	a=max(a, 1ll);
	if(b&1) b-=1;
	b/=2;
	b=max(b, 1ll);
	printf("%lld", b*(b+1)-a*(a+1));
}