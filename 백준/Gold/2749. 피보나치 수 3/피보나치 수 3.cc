#include<stdio.h>
long long n, i;
long long a[1500010]={0, 1, 1};
int main()
{
	scanf("%lld", &n);
	n%=1500000;
	for(i=3;i<=n;i++){
		a[i]=(a[i-1]+a[i-2])%1000000;
	}
	printf("%lld", a[n]);
}