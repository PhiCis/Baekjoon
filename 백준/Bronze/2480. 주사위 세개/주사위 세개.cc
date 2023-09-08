#include<stdio.h>
int a, b, c; 
int main()
{
	scanf("%d %d %d", &a, &b, &c);
	if((a==b)&&(b==c)) printf("%d", 10000+1000*a);
	else if((a==b)||(a==c)) printf("%d", 1000+100*a);
	else if(b==c) printf("%d", 1000+100*b);
	else printf("%d", ((a>b?a:b)>c?(a>b?a:b):c)*100);
	return 0;
}