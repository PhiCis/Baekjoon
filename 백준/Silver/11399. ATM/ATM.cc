#include<stdio.h>
#include<stdlib.h>
int n, a[1010], i;
long long int ans;
int compare(const void *x, const void *y){
	return *(int *)x-*(int *)y;
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	for(i=0;i<n;i++){
		ans+=a[i]*(n-i);
	}
	printf("%lld", ans);
}