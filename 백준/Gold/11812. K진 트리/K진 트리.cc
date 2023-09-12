#include<bits/stdc++.h>
using namespace std;

long long n, k, q, a, b;

int main()
{
	scanf("%lld%lld%lld", &n, &k, &q);
	while(q--)
	{
		scanf("%lld%lld", &a, &b);
		if(a<b) swap(a, b);
		if(k==1)
		{
			printf("%lld\n", a-b);
			continue;
		}
		long long cnt = 0;
		while(a!=b)
		{
			a = (a+(k-2))/k;
			cnt++;
			if(a<b) swap(a, b);
		}
		printf("%lld\n", cnt);
	}
}