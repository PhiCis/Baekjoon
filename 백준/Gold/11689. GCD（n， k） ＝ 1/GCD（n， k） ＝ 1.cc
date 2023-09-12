#include<stdio.h>
#include<math.h>
long long n, tmp, i, a[1000], pnt;
int main()
{
	scanf("%lld", &n);
	if(n==1)
	{
		printf("1");
		return 0;
	}
	tmp=n;
	if(tmp%2==0)
	{
		a[++pnt]=2;
		while(tmp%2==0)
		{
			tmp/=2;
		}
	}
	for(i=3;i<=sqrt(tmp);i+=2)
	{
		if(tmp%i==0)
		{
			a[++pnt]=i;
			while(tmp%i==0)
			{
				tmp/=i;
			}
		}
	}
	if(tmp!=1) a[++pnt]=tmp;
	for(i=1;i<=pnt;i++)
	{
		n=n/a[i]*(a[i]-1);
	}
	printf("%lld", n);
}