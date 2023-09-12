#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &a);
		if(a&1) printf("%d is odd\n", a);
		else printf("%d is even\n", a);
	}
}