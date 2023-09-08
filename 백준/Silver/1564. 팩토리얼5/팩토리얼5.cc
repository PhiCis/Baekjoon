#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	long long ans=1;
	for(int i=2;i<=n;i++)
	{
		ans*=i;
		while(ans%10==0) ans/=10;
		ans%=1000000000000;
	}
	printf("%05lld", ans%100000);
}