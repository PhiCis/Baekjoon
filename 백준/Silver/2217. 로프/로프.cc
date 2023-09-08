#include<stdio.h>
#include<stdlib.h>
int n, i, a[100010];
long long max;
int compare(const void *a, const void *b){
	return -*(int*)a+*(int*)b;
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	for(i=0;i<n;i++){
		max=max<(long long)(i+1)*a[i]?(long long)(i+1)*a[i]:max;
	}
	printf("%lld", max);
}