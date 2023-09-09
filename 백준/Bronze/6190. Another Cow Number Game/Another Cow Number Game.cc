#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, ans=0;
	scanf("%lld", &n);
	while(1)
	{
		if(n==1) 
		{
			printf("%lld", ans);
			return 0;
		}
		ans++;
		if(n&1) n=3*n+1;
		else n/=2;
	}
}