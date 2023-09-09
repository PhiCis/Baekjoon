#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if(a==0) return 0;
		printf("Triangle #%d\n", cnt);
		if(a==-1)
		{
			if(b>=c)
			{
				printf("Impossible.\n\n");
			}
			else
			{
				printf("a = %.3lf\n\n", sqrt(c*c-b*b));
			}
		}
		if(b==-1)
		{
			if(a>=c)
			{
				printf("Impossible.\n\n");
			}
			else
			{
				printf("b = %.3lf\n\n", sqrt(c*c-a*a));
			}
		}
		if(c==-1)
		{
			printf("c = %.3lf\n\n", sqrt(a*a+b*b));
		}
	}
}