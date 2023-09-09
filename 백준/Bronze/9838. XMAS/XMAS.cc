#include<bits/stdc++.h>
using namespace std;

int c[101010];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d", &a);
		c[a]=i;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", c[i]);
	}
}