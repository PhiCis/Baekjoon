#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, g;

int main()
{
	scanf("%d", &n);
	if(n==2)
	{
		scanf("%d%d", &a, &b);
		g = __gcd(a, b);
	}
	else
	{
		scanf("%d%d%d", &a, &b, &c);
		g = __gcd(a, __gcd(b, c));
	}
	for(int i=1;i<=g;i++)
	{
		if(g%i==0)
		{
			printf("%d\n", i);
		}
	}
}