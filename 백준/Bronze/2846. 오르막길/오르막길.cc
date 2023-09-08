#include<bits/stdc++.h>
using namespace std;

int n, a[1010], ans;
int tmp;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	tmp = a[1];
	for(int i=2;i<=n;i++)
	{
		if(a[i]<=a[i-1]) tmp = a[i];
		else ans = max(ans, a[i]-tmp);
	}
	printf("%d", ans);
}