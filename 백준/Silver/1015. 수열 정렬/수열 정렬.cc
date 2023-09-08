#include<stdio.h>
int n, i, a[60], s[60], j;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		for(j=0;j<i;j++)
		{
			if(a[j]<=a[i]) s[i]++;
			else s[j]++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ", s[i]);
	}
}