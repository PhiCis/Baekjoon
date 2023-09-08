#include<bits/stdc++.h>
using namespace std;

long long a, b;

int main()
{
	scanf("%lld %lld", &a, &b);
	long long g = __gcd(a, b);
	for(int i=1;i<=g;i++)
	{
		printf("1");
	}
}