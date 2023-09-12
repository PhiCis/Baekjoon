#include<stdio.h>
#include<stdlib.h>
int n, i;
struct A{
	int x, y;
}A[100001];
int compare(const void *a, const void *b){
	struct A *ptra=(struct A*)a;
	struct A *ptrb=(struct A*)b;
	if((ptra->y)!=(ptrb->y)) return (ptra->y)-(ptrb->y);
	else return (ptra->x)-(ptrb->x);
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &A[i].x, &A[i].y);
	}
	qsort(A, n, sizeof(struct A), compare);
	for(i=0;i<n;i++){
		printf("%d %d\n", A[i].x, A[i].y);
	}
}