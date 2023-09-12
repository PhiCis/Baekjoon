#include<bits/stdc++.h>
using namespace std;

int t, n, a[111], c[111], ans[111];

bool cmp(int a, int b)
{
	if(a%2==0)
	{
		if(b%2==0) return a<b;
		else return 0;
	}
	else
	{
		if(b%2==0) return 1;
		else return a<b;
	}
}

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[j]);
			if(a[j]&1) c[j]=1;
			else c[j]=0;
		}
		sort(a+1, a+n+1, cmp);
		printf("Case #%d: ", i);
		int cnt=1;
		for(int j=1;j<=n;j++)
		{
			if(c[j])
			{
				ans[j]=a[cnt++];
			}
		}
		for(int j=n;j>=1;j--)
		{
			if(!c[j])
			{
				ans[j]=a[cnt++];
			}
		}
		for(int j=1;j<=n;j++)
		{
			printf("%d ", ans[j]);
		}
		printf("\n");
	}
}