#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll g;

bool f(ll k)
{
	if((round(sqrt(k)))*(round(sqrt(k)))==k) return true;
	return false;
}

int main()
{
	bool flag = false;
	scanf("%lld", &g);
	for(ll i=1;i<=100000;i++)
	{
		if(i*i-g<=0) continue;
		if(f(i*i-g))
		{
			flag = true;
			printf("%d\n", i);
		}
	}
	if(!flag) printf("-1");
}