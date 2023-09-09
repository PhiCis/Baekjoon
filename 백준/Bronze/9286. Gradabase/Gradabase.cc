#include<bits/stdc++.h>
using namespace std;

int t, n, a;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		printf("Case %d:\n", i);
		scanf("%d", &n);
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a);
			if(a<=5) printf("%d\n", a+1);
		}
	}
}