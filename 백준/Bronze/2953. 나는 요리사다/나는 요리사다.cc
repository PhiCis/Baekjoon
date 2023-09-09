#include<stdio.h>
int i, j, a, ans, max, maxi;
int main()
{
	for(i=1;i<=5;i++)
	{
		ans=0;
		for(j=1;j<=4;j++)
		{
			scanf("%d", &a);
			ans+=a;
		}
		if(ans>max)
		{
			max=ans;
			maxi=i;
		}
	}
	printf("%d %d", maxi, max);
}