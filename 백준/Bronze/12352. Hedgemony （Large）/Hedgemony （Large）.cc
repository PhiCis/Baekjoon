#include<bits/stdc++.h>
using namespace std;

int t, n;
double a[1010];
int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		for(int j=1;j<=n;j++)
		{
			scanf("%lf", &a[j]);
		}
		for(int j=2;j<n;j++)
		{
			a[j]=min(a[j], 0.5*(a[j-1]+a[j+1]));
		}
		printf("Case #%d: %lf\n", i, a[n-1]);
	}
}