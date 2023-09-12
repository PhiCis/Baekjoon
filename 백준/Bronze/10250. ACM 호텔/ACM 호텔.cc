#include<stdio.h>
int t, i, h, w, n;
int main()
{
	scanf("%d", &t);
	for(i=0;i<t;i++){
		scanf("%d%d%d", &h, &w, &n);
		printf("%d\n", 100*((n-1)%h+1)+(n-1)/h+1);
	}
}