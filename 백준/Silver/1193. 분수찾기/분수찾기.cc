#include<stdio.h>
int n, i, j, a, b;
int main()
{
	scanf("%d", &n);
	while(n>i){
		i+=++j;
	}
	a=i+1-n; b=j+1-a;
	if(j&1) printf("%d/%d", a, b);
	else printf("%d/%d", b, a);
}