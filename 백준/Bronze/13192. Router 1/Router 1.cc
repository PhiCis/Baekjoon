#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=118;
	printf("%d %d\n", 2*n, n*n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d %d\n", i, n+j);
		}
	}
}