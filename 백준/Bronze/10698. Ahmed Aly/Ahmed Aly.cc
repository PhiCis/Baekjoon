#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a, c, d;
		char b;
		scanf("%d %c %d = %d", &a, &b, &c, &d);
		if(b=='+')
		{
			if(a+c==d)
			{
				printf("Case %d: YES\n", i);
			}
			if(a+c!=d)
			{
				printf("Case %d: NO\n", i);
			}
		}
		if(b=='-')
		{
			if(a-c==d)
			{
				printf("Case %d: YES\n", i);
			}
			if(a-c!=d)
			{
				printf("Case %d: NO\n", i);
			}
		}
	}
}