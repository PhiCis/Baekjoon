#include<bits/stdc++.h>
using namespace std;

int t, n, s, a[10010], ans;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		s=0, ans=0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
			s+=a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]*n>s) ans++;
		}
		printf("%.3lf %.3lf%\n", (double)s/n + 0.000000000001, (double)ans*100/n + 0.000000000001);
	}
}