#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n, a, b, c=0, ans=0;
		scanf("%d", &n);
		if(n==-1) return 0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d", &a, &b);
			ans+=(b-c)*a;
			c=b;
		}
		printf("%d miles\n", ans);
	}
}