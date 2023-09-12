#include <stdio.h>
int sum, n, t;
char k;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		sum=0;
		while(1)
		{
			scanf("%d", &n);
			sum+=n;
			scanf("%c", &k);
			if (k == '\n') break;
		}
		printf("%d\n", sum);
	}
	
}