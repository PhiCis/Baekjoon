#include<bits/stdc++.h>
using namespace std;

int n;
long long a;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%lld", &a);
		printf("%lld\n", (long long)(-0.5+sqrt(0.25+2*a)));
	}
}