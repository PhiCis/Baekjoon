#include<stdio.h>
int n, i, a[1010];
int main()
{
	a[1]=a[3]=1;
	for(i=4;i<=1000;i++)
	{
		if(a[i-1]==0||a[i-3]==0)
		{
			a[i]=1;
		}
		else a[i]=0;
	}
	scanf("%d", &n);
	printf(a[n]==0?"CY":"SK");
}