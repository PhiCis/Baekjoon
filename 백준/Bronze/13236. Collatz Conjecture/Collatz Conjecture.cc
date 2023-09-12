#include<bits/stdc++.h>
using namespace std;

long long n;
int main()
{
	scanf("%lld", &n);
	while(1)
	{
		printf("%lld ", n);
		if(n==1) return 0;
		if(n&1)
		{
			(n*=3)+=1;
		}
		else
		{
			n>>=1;
		}
	}
}