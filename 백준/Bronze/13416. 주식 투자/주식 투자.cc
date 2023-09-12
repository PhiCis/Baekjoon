#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, a, b, c;
	scanf("%d", &t);
	
	while(t--)
	{
		int ans=0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d%d", &a, &b, &c);
			ans+=max(max(0, a), max(b, c));
		}
		printf("%d\n", ans);
	}
}