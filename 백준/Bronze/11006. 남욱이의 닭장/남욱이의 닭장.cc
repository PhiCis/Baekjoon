#include<bits/stdc++.h>
using namespace std;

int n, a, b;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		printf("%d %d\n", 2*b-a, a-b);
	}
}