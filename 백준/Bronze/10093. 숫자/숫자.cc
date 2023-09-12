#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b;

int main()
{
	scanf("%lld%lld", &a, &b);
	if(a>b) swap(a, b);
	printf("%lld\n", max(0ll, b-a-1));
	for(ll i=a+1;i<b;i++)
	{
		printf("%lld ", i);
	}
}