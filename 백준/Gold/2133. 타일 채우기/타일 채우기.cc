#include<stdio.h>
long long n;
long long a[40];
int main()
{
	scanf("%d", &n);
	if(n&1) printf("0");
	else
	{
		a[0]=1;
		a[1]=3;
		for(int i=2;i<=n/2;i++)
		{
			a[i]=a[i-1]*4-a[i-2];
		}
		printf("%lld", a[n/2]);
	}
}