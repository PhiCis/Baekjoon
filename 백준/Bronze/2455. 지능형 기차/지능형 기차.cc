#include<stdio.h>
int main()
{
	int a, b, i, ans=0, max=0;
	for(i=0;i<4;i++)
	{
		scanf("%d%d", &a, &b);
		ans+=b-a;
		if(max<ans) max=ans;
	}
	printf("%d", max);
}