#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, a, b;
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		printf("Scenario #%d:\n", i);
		scanf("%lld%lld", &a, &b);
		printf("%lld\n\n", (a+b)*(b-a+1)/2);
	}
}