#include<stdio.h>
#include<stdlib.h>
int a[100010], b;
int compare(const void *x, const void *y){
	return *(int *)x>*(int *)y;
}
int f(int s, int e){
	if(s==e||s+1==e) return 0;
	int middle=(s+e)/2;
	if(b==a[middle]) return 1;
	else if(b>a[middle]) return f(middle, e);
	return f(s, middle);
}
int main()
{
	int n, m;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	scanf("%d", &m);
	for(int i=0;i<m;i++){
		scanf("%d", &b);
		if(b<a[0]||b>a[n-1]) printf("0\n");
		else if(b==a[0]||b==a[n-1]) printf("1\n");
		else printf("%d\n", f(0, n-1));
	}
}