#include<stdio.h>
int a, b, v;
int main()
{
	scanf("%d%d%d", &a, &b, &v);
	if(a==v) printf("1");
	else printf("%d", 2+(v-a-1)/(a-b));
}