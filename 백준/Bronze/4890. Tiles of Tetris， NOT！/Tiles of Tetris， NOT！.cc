#include<bits/stdc++.h>
using namespace std;

long long a, b;

int main()
{
	while(1)
	{
		scanf("%lld%lld", &a ,&b);
		if(a==0&&b==0) return 0;
		printf("%lld\n", a/__gcd(a, b)*b/__gcd(a, b));
		
	}
}