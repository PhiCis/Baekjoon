#include<stdio.h>
int n, i, a, ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a);
		ans+=a;
	}
	if(ans*2>n) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}