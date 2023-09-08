#include<stdio.h>
int n, i, a, ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		ans+=a;
	}
	printf("%d", ans-n+1);
}