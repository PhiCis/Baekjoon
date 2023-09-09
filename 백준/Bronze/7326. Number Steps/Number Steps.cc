#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, n;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		if(a-2==b)
		{
			if(a&1)
			{
				printf("%d\n", 2*a-3);
			}
			else
			{
				printf("%d\n", 2*a-2);
			}
		}
		else if(a==b)
		{
			if(a&1)
			{
				printf("%d\n", 2*a-1);
			}
			else
			{
				printf("%d\n", 2*a);
			}
		}
		else
		{
			printf("No Number\n");
		}
	}
}