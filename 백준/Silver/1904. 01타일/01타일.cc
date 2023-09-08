#include<stdio.h>
int n, a[1000100]={1,1,};
int main()
{
	scanf("%d", &n);
	for(int i=2;i<=n;i++){
		a[i]=(a[i-1]+a[i-2])%15746;
	}
	printf("%d", a[n]);
}