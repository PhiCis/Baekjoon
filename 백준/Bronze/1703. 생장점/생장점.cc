#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		int ans = 1;
		for(int i=1;i<=n;i++)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			ans*=a;
			ans-=b;
		}
		printf("%d\n", ans);
	}
}