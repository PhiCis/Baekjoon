#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c;
	scanf("%d%d%d", &n, &a, &b);
	while(n--)
	{
		scanf("%d", &c);
		if(a*a+b*b<c*c)
		{
			printf("NE\n");
		}
		else
		{
			printf("DA\n");
		}
	}
}