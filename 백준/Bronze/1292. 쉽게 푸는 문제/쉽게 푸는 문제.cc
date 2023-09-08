#include<stdio.h>
int i, j, d[1200], s[1200], pnt, a, b;
int main()
{
	for(i=1;i<=45;i++)
	{
		for(j=1;j<=i;j++)
		{
			d[++pnt]=i;
		}
	}
	for(i=1;i<=pnt;i++)
	{
		s[i]=s[i-1]+d[i];
	}
	scanf("%d%d", &a, &b);
	printf("%d", s[b]-s[a-1]);
}