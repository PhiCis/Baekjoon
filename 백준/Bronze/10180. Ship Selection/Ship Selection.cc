#include<bits/stdc++.h>
using namespace std;

int t, n, d, a, b, c;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int ans=0;
		scanf("%d%d", &n, &d);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d%d", &a, &b, &c);
			if(a*b>=c*d) ans++;
		}
		printf("%d\n", ans);
	}
}