#include<bits/stdc++.h>
using namespace std;

long long n, a[110];

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	printf("%lld ", a[1]);
	for(int i=2;i<=n;i++)
	{
		printf("%lld ", a[i]*i-a[i-1]*(i-1));
	}
}