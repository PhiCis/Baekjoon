#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int g=__gcd(a, b);
	for(int i=1;i*i<=g;i++)
	{
		if(g%i==0)
		{
			if(i*i==g) printf("%d %d %d\n", i, a/i, b/i);
			else printf("%d %d %d\n%d %d %d\n", i, a/i, b/i, g/i, a/g*i, b/g*i);
		}
	}
}