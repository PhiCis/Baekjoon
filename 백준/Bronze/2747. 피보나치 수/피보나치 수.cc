#include<stdio.h>
int n, i;
long long a[50]={0, 1, 1};
int main()
{
	scanf("%d", &n);
	for(i=3;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	printf("%lld", a[n]);
}