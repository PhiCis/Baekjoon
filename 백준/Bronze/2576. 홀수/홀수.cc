#include<stdio.h>
int i, n, ans;
int main()
{
	int min=100;
	for(i=0;i<7;i++)
	{
		scanf("%d", &n);
		if(n&1)
		{
			ans+=n;
			if(min>n) min=n;
		}
	}
	if(ans==0) printf("-1");
	else printf("%d\n%d", ans, min);
}