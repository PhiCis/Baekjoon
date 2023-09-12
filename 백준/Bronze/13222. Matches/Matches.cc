#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c;
	scanf("%d%d%d", &n, &a, &b);
	a=a*a+b*b;
	while(n--)
	{
		scanf("%d", &c);
		if(a>=c*c)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}