#include<stdio.h>
int t, i, n, j;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d", &n);
		for(j=0;n>>j;j++){
			if(n>>j&1) printf("%d ", j);
		}
		printf("\n");
	}
}