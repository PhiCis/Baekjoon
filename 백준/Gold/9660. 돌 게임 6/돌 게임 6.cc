/*#include<stdio.h>
int n, i, a[1010];
int main()
{
	a[1]=a[3]=a[4]=1;
	for(i=5;i<=1000;i++)
	{
		if(a[i-1]==0||a[i-3]==0||a[i-4]==0)
		{
			a[i]=1;
		}
		else a[i]=0;
	}
	scanf("%d", &n);
	for(i=1;i<=1000;i++)
	{
		printf("%d: %d\n", i, a[i]);
	}
	printf(a[n]==0?"CY":"SK");
}*/

#include<stdio.h>
long long n;
int main()
{
	scanf("%lld", &n);
	printf((n%7==0||n%7==2)?"CY":"SK");
}
