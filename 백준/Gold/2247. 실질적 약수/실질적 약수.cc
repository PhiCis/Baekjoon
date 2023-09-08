#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, ans = 0;
	scanf("%lld", &n);
	for(long long i=2;i<=n/2;i++)
	{
		ans = (ans+(n/i-1)*i)%1000000;
	}
	printf("%lld", ans);
}