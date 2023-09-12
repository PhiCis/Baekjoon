#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, a, b, c;
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		while(b%2==0)
		{
			a--;
			b>>=1;
		}
		printf("%lld\n", a);
	}
}