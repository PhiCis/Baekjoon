#include<bits/stdc++.h>
using namespace std;

int n, a;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &a);
		printf("%d %d %d %d\n", a/25, a%25/10, (a%25/5)&1, a%5);
	}
}