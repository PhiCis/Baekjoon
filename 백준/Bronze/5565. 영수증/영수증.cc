#include<stdio.h>
int a, b, c, i;
int main()
{
	scanf("%d", &a);
	for(i=0;i<9;i++)
	{
		scanf("%d", &b);
		c+=b;
	}
	printf("%d", a-c);
}