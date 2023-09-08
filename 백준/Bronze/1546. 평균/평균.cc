#include<stdio.h>
int n, i;
double a[1010], max, ans;
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%lf", &a[i]);
		if(max<a[i]) max=a[i];
		ans+=a[i];
	}
	printf("%lf", ans*100/max/n);
}