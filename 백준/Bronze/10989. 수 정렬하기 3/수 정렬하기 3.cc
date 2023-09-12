#include<stdio.h>
int n, i, j, x, a[10010];
int main()
{
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &x);
		a[x]++;
	}
	for(i=1;i<=10000;i++){
		for(j=0;j<a[i];j++){
			printf("%d\n", i);
		}
	}
}