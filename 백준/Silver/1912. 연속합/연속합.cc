#include<stdio.h>
int n, i, a[101010], max, d[101010];
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	max=d[0]=a[0];
	for(i=1;i<n;i++){
		d[i]=d[i-1]>0?d[i-1]+a[i]:a[i];
		if(d[i]>max) max=d[i];
	}
	printf("%d", max);
}