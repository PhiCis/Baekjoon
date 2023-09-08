#include<stdio.h>
int ans, n, cnt;
int i, j, a[4000010], b[400010], c[400010];
int main()
{
	for(i=1;i<=4000000;i++)
	{
		a[i]=i;
		if(~i&1) a[i]=2;
	}
	for(i=3;i<=2000;i+=2)
	{
		for(j=i;j<=4000000;j+=i*2)
		{
			if(a[j]>i) a[j]=i;
		}
	}
	for(i=2;i<=4000000;i++)
	{
		if(a[i]==i) b[++cnt]=i;
		c[cnt]=c[cnt-1]+b[cnt];
	}
	scanf("%d", &n);
	for(i=1;i<=cnt;i++)
	{
		for(j=i-1;j>=0;j--)
		{
			if(n==c[i]-c[j]) ans++;
			if(n<c[i]-c[j]) break;
		}
	}
	printf("%d", ans);
}