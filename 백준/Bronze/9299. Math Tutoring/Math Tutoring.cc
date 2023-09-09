#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, a;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d", &n);
		printf("Case %d: %d ", i, n-1);
		for(int j=n;j>=0;j--)
		{
			scanf("%d", &a);
			if(j) printf("%d ", j*a);
		}
		printf("\n");
	}
}