#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		long long a, ans;
		scanf("%lld", &a);
		ans = a;
		while(a>1)
		{
			if(a&1) a=a*3+1;
			else a=a/2;
			ans=max(ans, a);
		}
		printf("%lld\n", ans);
	}
}