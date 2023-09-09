#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, a;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int ansa=0, ansb=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a);
			if(a&1)
			{
				ansa+=a;
			}
			else
			{
				ansb+=a;
			}
		}
		if(ansa>ansb)
		{
			printf("ODD\n");
		}
		else if(ansa<ansb)
		{
			printf("EVEN\n");
		}
		else
		{
			printf("TIE\n");
		}
	}
}