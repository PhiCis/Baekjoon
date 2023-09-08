#include<bits/stdc++.h>
using namespace std;

int n, m, l, a[60];

int main()
{
	scanf("%d%d%d", &n, &m, &l);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	a[n+1]=l;
	sort(a+1, a+n+1);
	for(int i=l;i>=1;i--)
	{
		int cnt = 0;
		for(int j=1;j<=n+1;j++)
		{
			cnt += (a[j]-a[j-1]-1)/i;
		}
		if(cnt>m)
		{
			printf("%d", i+1);
			return 0;
		}
	}
	printf("1");
	return 0;
}