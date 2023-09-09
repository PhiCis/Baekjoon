#include<bits/stdc++.h>
using namespace std;

int n, k;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &k);
		for(int i=1;i<=k;i++)
		{
			for(int j=1;j<=k;j++)
			{
				if(i==1||i==k||j==1||j==k) printf("#");
				else printf("J");
			}
			printf("\n");
		}
		printf("\n");
	}
}