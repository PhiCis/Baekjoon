#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	while(1)
	{
		scanf("%lld", &n);
		if(n==0) return 0;
		printf("%lld\n", n*(n+1)*(n+2)/6);
	}
}