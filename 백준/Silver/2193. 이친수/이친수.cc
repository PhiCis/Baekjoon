#include<stdio.h>
long long n, ans, a[100][5];
int main()
{
	scanf("%lld", &n);
	a[1][0]=0;
	a[1][1]=1;
	for(int i=2;i<=n;i++)
	{
		a[i][0]=a[i-1][0]+a[i-1][1];
		a[i][1]=a[i-1][0];
	}
	printf("%lld", a[n][0]+a[n][1]);
}