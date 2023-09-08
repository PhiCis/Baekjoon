#include<bits/stdc++.h>
using namespace std;

int n, k;

long long f(int a, int b)
{
	long long ret = 1;
	for(int i=1;i<=b;i++)
	{
		ret*=a;
	}
	return ret;
}


int main()
{
	scanf("%d%d", &n, &k);
	printf("%lld", f(n/k+1, n%k)*f(n/k, k-n%k));
}