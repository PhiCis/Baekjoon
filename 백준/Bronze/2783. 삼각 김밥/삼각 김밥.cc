#include<bits/stdc++.h>
using namespace std;

int a, b, n;

int main()
{
	scanf("%d%d", &a, &b);
	double ans = 1000.0/b*a;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		ans = min(ans, 1000.0/b*a);
	}
	printf("%.2lf", ans);
}