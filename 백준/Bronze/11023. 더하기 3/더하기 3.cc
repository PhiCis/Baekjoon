#include<stdio.h>
int n, ans;
int main()
{
	while(~scanf("%d", &n)) ans+=n;
	printf("%d", ans);
}