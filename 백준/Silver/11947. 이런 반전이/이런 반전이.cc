#include<bits/stdc++.h>
using namespace std;

long long t, n;

int main()
{
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		if(n<=9)
		{
			printf("%lld\n", min(n, 4ll)*(9ll-min(n, 4ll)));
		}
		else if(n<=99)
		{
			printf("%lld\n", min(n, 49ll)*(99ll-min(n, 49ll)));
		}
		else if(n<=999)
		{
			printf("%lld\n", min(n, 499ll)*(999ll-min(n, 499ll)));
		}
		else if(n<=9999)
		{
			printf("%lld\n", min(n, 4999ll)*(9999ll-min(n, 4999ll)));
		}
		else if(n<=99999)
		{
			printf("%lld\n", min(n, 49999ll)*(99999ll-min(n, 49999ll)));
		}
		else if(n<=999999)
		{
			printf("%lld\n", min(n, 499999ll)*(999999ll-min(n, 499999ll)));
		}
		else if(n<=9999999)
		{
			printf("%lld\n", min(n, 4999999ll)*(9999999ll-min(n, 4999999ll)));
		}
		else if(n<=99999999)
		{
			printf("%lld\n", min(n, 49999999ll)*(99999999ll-min(n, 49999999ll)));
		}
		else if(n<=999999999)
		{
			printf("%lld\n", min(n, 499999999ll)*(999999999ll-min(n, 499999999ll)));
		}
		else if(n<=9999999999)
		{
			printf("%lld\n", min(n, 4999999999ll)*(9999999999ll-min(n, 4999999999ll)));
		}
	}
}