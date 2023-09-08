#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, g;
	scanf("%d%d", &a, &b);
	g=__gcd(a, b);
	printf("%lld", (long long)g*(a/g+b/g-1));
}