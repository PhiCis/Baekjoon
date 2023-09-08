#include<bits/stdc++.h>
using namespace std;

int n, a[1010];
int ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=n-1;i>=1;i--)
	{
		if(a[i]<a[i+1]) continue;
		else ans+=a[i]-(a[i+1]-1);
		a[i]=(a[i+1]-1);
	}
	printf("%d", ans);
}