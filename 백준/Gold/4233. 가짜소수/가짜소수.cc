#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, p;

ll power(ll a, ll b)
{
	ll ret=1;
	while(b)
	{
		if(b&1) ret=ret*a%p;
		a=a*a%p;
		b>>=1;
	}
	return ret;
}

int main()
{
	while(1)
	{
		scanf("%lld%lld", &p, &a);
		if(p&1)
		{
			for(int i=3;i*i<=p;i+=2)
			{
				if(p%i==0) goto skip;
			}
			printf("no\n");
			goto skip2;
		}
		skip:
		if(p==0&&a==0) return 0;
		if(power(a, p)==a%p) printf("yes\n");
		else printf("no\n");
		skip2:;
	}
}