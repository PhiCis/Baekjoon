#include<bits/stdc++.h>
using namespace std;

int a, b, c, n, ans;

int main()
{
	scanf("%d%d", &a, &b);
	ans=abs(a-b);
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &c);
		ans=min(ans, 1+abs(c-b));
	}
	printf("%d", ans);
}