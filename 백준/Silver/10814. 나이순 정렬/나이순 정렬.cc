#include<stdio.h>
#include<stdlib.h>
int n, i;
struct A{
	int x, y;
	char name[110];
}A[100001];
int compare(const void *a, const void *b){
	struct A *ptra=(struct A*)a;
	struct A *ptrb=(struct A*)b;
	if((ptra->x)!=(ptrb->x)) return (ptra->x)-(ptrb->x);
	else return (ptra->y)-(ptrb->y);
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %s", &A[i].x, &A[i].name);
		A[i].y=i;
	}
	qsort(A, n, sizeof(struct A), compare);
	for(i=0;i<n;i++){
		printf("%d %s\n", A[i].x, A[i].name);
	}
}
