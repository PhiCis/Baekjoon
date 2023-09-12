#include<bits/stdc++.h>
using namespace std;
int w, h, n, a, b;
int ans=0;

int main()
{
	scanf("%d%d%d", &w, &h, &n);
	scanf("%d%d", &a, &b);
	for(int i=2;i<=n;i++)
	{
		int c, d;
		scanf("%d%d", &c, &d);
		if(a<c&&b<d)
		{
			ans+=max(c-a, d-b);
		}
		else if(a>c&&b>d)
		{
			ans+=max(a-c, b-d);
		}
		else
		{
			ans+=abs(a-c)+abs(b-d);
		}
		a=c, b=d;
	}
	printf("%d", ans);
}