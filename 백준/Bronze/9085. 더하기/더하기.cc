#include<stdio.h>
int t, n, i, j, a;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++)
	{
		scanf("%d", &n);
		int ans=0;
		for(j=0;j<n;j++)
		{
			scanf("%d", &a);
			ans+=a;
		}
		printf("%d\n", ans);
	}
}