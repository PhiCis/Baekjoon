#include<bits/stdc++.h>
using namespace std;
long long n, ANS=5000000000;

int main()
{
	scanf("%lld", &n);
	long long s=1, e=500000000;
	while(s<=e)
	{
		long long m=s+e>>1;
		long long tmp=m;
		long long ans=0;
		while(tmp)
		{
			ans+=tmp/5;
			tmp/=5;
		}
		if(ans>=n)
		{
			ANS=min(ANS, m);
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	long long tmp=ANS;
	long long ans=0;
	while(tmp)
	{
		ans+=tmp/5;
		tmp/=5;
	}
	if(ans==n)	printf("%lld", ANS);
	else printf("-1");
}