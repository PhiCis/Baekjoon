#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		long long a;
		scanf("%lld", &a);
		long long s=(long long)(sqrt(a));
		if((s-1)*(s-1)==a||s*s==a||(s+1)*(s+1)==a) printf("1 ");
		else printf("0 ");
	}
}