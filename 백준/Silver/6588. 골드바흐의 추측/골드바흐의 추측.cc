#include<stdio.h>
int i, j, a[1000010];
int main()
{
	for(i=1;i<=1000000;i++)
	{
		a[i]=i;
		if(~i&1) a[i]=2;
	}
	for(i=3;i<=1000;i+=2)
	{
		for(j=i;j<=1000000;j+=i*2)
		{
			if(a[j]>i) a[j]=i;
		}
	}
	int n;
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		for(i=3;i<=n/2;i+=2)
		{
			if(a[i]==i&&a[n-i]==n-i)
			{
				printf("%d = %d + %d\n", n, i, n-i);
				break;
			}
		}
	}
}