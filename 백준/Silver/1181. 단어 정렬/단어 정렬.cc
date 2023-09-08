#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n, i, j;
struct A{
	int x;
	char str[60];
}A[20001];
int compare(const void *a, const void *b){
	struct A *ptra=(struct A*)a;
	struct A *ptrb=(struct A*)b;
	if((ptra->x)!=(ptrb->x)) return (ptra->x)-(ptrb->x);
	else{
		j=0;
		while(ptra->str[j]==ptrb->str[j]&&j<(ptra->x)){
			j++;
		}
		return (int)(ptra->str[j])-(int)(ptrb->str[j]);
	}
}
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", &A[i].str);
		A[i].x=strlen(A[i].str);
	}
	qsort(A, n, sizeof(struct A), compare);
	for(i=0;i<n;i++){
		if(strcmp(A[i].str, A[i+1].str)!=0)printf("%s\n", A[i].str);
	}
}