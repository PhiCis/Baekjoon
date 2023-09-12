#include<stdio.h>
int n, i, a, ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<5;i++)
	{
		scanf("%d", &a);
		if(a==n) ans++;
	}
	printf("%d", ans);
}