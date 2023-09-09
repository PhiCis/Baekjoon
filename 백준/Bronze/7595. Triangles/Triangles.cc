#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}