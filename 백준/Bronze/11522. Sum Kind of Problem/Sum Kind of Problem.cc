#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		printf("%d %d %d %d\n", a, b*b+b>>1, b*b, b*b+b);
	}
}