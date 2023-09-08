#include<stdio.h>
int n, pnt1, pnt2, ans;
int main()
{
	scanf("%d", &n);
	pnt1=9;pnt2=1;
	while(n)
	{
		if(n<=pnt1)
		{
			ans+=n*pnt2;
			n=0;
		}
		else
		{
			n-=pnt1;
			ans+=pnt1*pnt2;
			pnt1*=10;
			pnt2++;
		}
	}
	printf("%d", ans);
}