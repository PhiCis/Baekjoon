#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b;
		scanf("%d", &a);
		if(a==0) return 0;
		scanf("%d", &b);
		if(b<=a/2)
		{
			if(b%2==0)
			{
				printf("%d %d %d\n", b-1, a+1-b, a+1-(b-1));
			}
			else
			{
				printf("%d %d %d\n", b+1, a+1-(b+1), a+1-b);
			}
		}
		else
		{
			if(b%2==0)
			{
				printf("%d %d %d\n", a+1-b, a+1-(b-1), b-1);
			}
			else
			{
				printf("%d %d %d\n", a+1-(b+1), a+1-b, b+1);
			}
		}
	}
}