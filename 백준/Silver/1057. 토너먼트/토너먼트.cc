#include<stdio.h>
int a, b, n, pnt;
int main()
{
	scanf("%d%d%d", &n, &a, &b);
	while(a!=b)
	{
		pnt++;
		a++;
		a>>=1;
		b++;
		b>>=1;
	}
	printf("%d", pnt);
}