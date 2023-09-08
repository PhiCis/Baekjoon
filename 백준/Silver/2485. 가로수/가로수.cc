#include<bits/stdc++.h>
using namespace std;

int n, a[100010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	int tmp=a[2]-a[1];
	for(int i=2;i<n;i++)
	{
		tmp=__gcd(tmp, a[i+1]-a[i]);
	}
	printf("%d", (a[n]-a[1])/tmp-(n-1));
}