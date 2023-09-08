#include<bits/stdc++.h>
using namespace std;

int a[1000010];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+1+n);
	for(int i=n;i>=3;i--)
	{
		if(a[i]<a[i-1]+a[i-2])
		{
			printf("%d", a[i]+a[i-1]+a[i-2]);
			return 0;
		}
	}
	printf("-1");
	return 0;
}