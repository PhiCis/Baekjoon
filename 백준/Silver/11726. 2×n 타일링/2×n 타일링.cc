#include<stdio.h>
int n, i, a[1010]={0, 1, };
int main()
{
	scanf("%d", &n);
	for(i=2;i<=n+1;i++){
		a[i]=(a[i-1]+a[i-2])%10007;
	}
	printf("%d", a[n+1]);
}