#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, x, y;
	int ans = 0;
	scanf("%d%d%d%d", &n, &k, &x, &y);
	for(int i=1;i<=n;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if((x-a)*(x-a)+(y-b)*(y-b)>k*k) ans++;
	}
	printf("%d", ans);
}