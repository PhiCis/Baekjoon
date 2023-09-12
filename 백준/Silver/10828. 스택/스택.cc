#include<stdio.h>
#include<string.h>
int n, i, k, A[10100], pnt;
char a[10];
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", &a);
		if(strcmp("push", a)==0){
			scanf("%d\n", &k);
			A[++pnt]=k;
		}
		if(strcmp("top", a)==0){
			if(pnt==0) printf("-1\n");
			else printf("%d\n", A[pnt]);
		}
		if(strcmp("size", a)==0){
			printf("%d\n", pnt);
		}
		if(strcmp("empty", a)==0){
			if(pnt) printf("0\n");
			else printf("1\n");
		}
		if(strcmp("pop", a)==0){
			if(pnt==0) printf("-1\n");
			else printf("%d\n", A[pnt--]);
		}
	}
}