#include<bits/stdc++.h>
using namespace std;

int T, a, b;

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &a ,&b);
		printf("%d %d\n", a*b/__gcd(a, b), __gcd(a, b));
	}
}