#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x, y, z;
int main()
{
	scanf("%lld%lld", &x, &y);
	if(x==y)
	{
		printf("-1");
		return 0;
	}
	z = 100*y/x;
	if(z==99)
	{
		printf("-1");
		return 0;
	}
	printf("%lld", (x*(z+1)-100*y-1)/(100-z-1)+1);
	/*
	100*(y+k)>=(z+1)(x+k);
	k(100-z-1)>=x*(z+1)-100*y;
	*/
}