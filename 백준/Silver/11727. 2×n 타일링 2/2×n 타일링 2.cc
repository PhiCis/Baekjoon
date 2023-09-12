#include<stdio.h>
int n, i, a[1010]={1, 1, };
int main()
{
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		a[i]=(a[i-1]+a[i-2]*2)%10007;
	}
	printf("%d", a[n]);
}