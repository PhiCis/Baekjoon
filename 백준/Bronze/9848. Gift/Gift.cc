#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	int a[110];
	int ans = 0;
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		if(i>1&&a[i-1]-a[i]>=k) ans++;
	}
	printf("%d", ans);
}