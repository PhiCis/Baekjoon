#include<stdio.h>
long long a[110]={0, 1, 1, 1, 2, 2,}, i, n, t;
int main()
{
	for(i=6;i<=100;i++){
		a[i]=a[i-1]+a[i-5];
	}
	scanf("%lld", &n);
	for(i=0;i<n;i++){
		scanf("%lld", &t);
		printf("%lld\n", a[t]);
	}
	return 0;
}