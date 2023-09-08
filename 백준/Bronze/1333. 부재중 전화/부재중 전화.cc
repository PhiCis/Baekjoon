#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, l, d;
	scanf("%d%d%d", &n, &l, &d);
	int ans = 0;
	while(1)
	{
		ans+=d;
		if(ans>=(l+5)*n)
		{
			printf("%d", ans);
			return 0;
		}
		if(ans%(l+5)>=l)
		{
			printf("%d", ans);
			return 0;
		}
	}
}