#include<stdio.h>
int n, a, b, i, ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &a, &b);
		ans+=b%a;
	}
	printf("%d", ans);
}