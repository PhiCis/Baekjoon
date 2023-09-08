#include<stdio.h>
#include<stdlib.h>
int n, a[1000010], i;
int compare(const void *a, const void *b){
	return *(int *)a-*(int *)b;
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	for(i=0;i<n;i++){
		printf("%d\n", a[i]);
	}
}