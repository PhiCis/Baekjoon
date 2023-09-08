#include<bits/stdc++.h>
using namespace std;

int n, a, b, c;
int ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		if(a==b&&b==c)
		{
			ans = max(ans, a*1000+10000);
		}
		else if(a==b||a==c)
		{
			ans = max(ans, a*100+1000);
		}
		else if(b==c)
		{
			ans = max(ans, b*100+1000);
		}
		else
		{
			ans = max(ans, max(max(a, b), c)*100);
		}
	}
	printf("%d", ans);
}