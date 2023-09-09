#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		long long n, ans=0;
		scanf("%lld", &n);
		if(!n) return 0;
		while(1)
		{
			ans=max(ans, n);
			if(n==1) 
			{
				printf("%lld\n", ans);
				break;
			}
			
			if(n&1) n=3*n+1;
			else n/=2;
		}
	}
}