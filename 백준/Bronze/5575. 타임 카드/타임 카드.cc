#include<stdio.h>
int main()
{
	int i, a, b, c, d, e, f;
	for(i=0;i<3;i++)
	{
		scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
		d-=1;e+=59;f+=60;
		printf("%d %d %d\n", (d-a+(e-b+(f-c)/60)/60)%24, (e-b+(f-c)/60)%60, (f-c)%60);
	}
}