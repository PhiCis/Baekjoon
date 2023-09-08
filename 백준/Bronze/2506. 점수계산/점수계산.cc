#include<stdio.h>
int n, i, a[10010], b[10010], ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		b[i]=(a[i]==0)?0:(b[i-1]+1);
	}
	for(i=0;i<n;i++)
	{
		ans+=b[i];
	}
	printf("%d", ans);
}