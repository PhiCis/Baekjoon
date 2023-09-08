#include<stdio.h>
int n, k, i, a[10010], pnt;
int main()
{
	scanf("%d%d", &n, &k);
	for(i=1;i<=n;i++)
	{
		if(n%i==0) a[++pnt]=i;
	}
	printf("%d", a[k]);
}