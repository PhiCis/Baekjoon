#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	while(a!=b)
	{
		if(a<b) a+=15;
		else b+=28;
	}
	while(b!=c)
	{
		if(b<c) b+=420;
		else c+=19;
	}
	printf("%d", c);
}