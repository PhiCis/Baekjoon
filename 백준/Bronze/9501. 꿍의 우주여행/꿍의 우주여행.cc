#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, d, a, b, c;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &d);
		int ans = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d%d%d", &a, &b, &c);
			if(d*c<=b*a) ans++;
		}
		printf("%d\n", ans);
	}
}