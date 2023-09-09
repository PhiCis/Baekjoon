#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		printf("Case %d:\n", i);
		for(int j=1;j<=6;j++)
		{
			for(int k=j;k<=6;k++)
			{
				if(j+k==n)
				{
					printf("(%d,%d)\n", j, k);
				}
			}
		}
	}
}