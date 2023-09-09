#include<stdio.h>
int a, b, c, i;
int main()
{
	while(1)
	{
		scanf("%d%d%d", &a, &b, &c);
		i++;
		if(a==0&&b==0&&c==0) return 0;
		printf("Case %d: %d\n", i, a*(c/b)+(a>c%b?c%b:a));
	}
}