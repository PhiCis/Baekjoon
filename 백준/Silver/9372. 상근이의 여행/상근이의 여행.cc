#include<bits/stdc++.h>
using namespace std;

int n, a, b;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", a-1);
		for(int i=1;i<=2*b;i++)
		{
			scanf("%d", &a);
		}
	}
}