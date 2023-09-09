#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a<c||b<c) printf("0");
	else if(a<c*2) printf("%d", b/c);
	else if(b<c*2) printf("%d", a/c);
	else printf("%d", (a/c+b/c-2)*2);
}