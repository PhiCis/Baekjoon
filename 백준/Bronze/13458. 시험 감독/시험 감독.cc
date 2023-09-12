#include<stdio.h>
long long a, b, c, ans, A[1000010];
int main()
{
	scanf("%lld", &a);
	for(int i=0;i<a;i++)
	{
		scanf("%lld", &A[i]);
	}
	scanf("%lld%lld", &b, &c);
	for(int i=0;i<a;i++)
	{
		ans+=1;
		if(A[i]>b) ans+=(A[i]-b-1)/c+1;
	}
	printf("%lld", ans);
}