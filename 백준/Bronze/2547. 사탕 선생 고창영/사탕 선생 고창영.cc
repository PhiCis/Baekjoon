#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		__int128_t ans = 0;
		for(int i=1;i<=n;i++)
		{
			long long a;
			scanf("%lld", &a);
			ans+=(__int128_t)a;
		}
		printf(ans%(__int128_t)n==0?"YES\n":"NO\n");
	}
}