#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		long long ans=0;
		ans+=n-(n/2);
		ans+=(n+1)/2-(n+2)/6;
		printf("%lld\n", ans);
	}
}