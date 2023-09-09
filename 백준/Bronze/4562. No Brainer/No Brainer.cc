#include<bits/stdc++.h>
using namespace std;
int n, a, b;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		if(a<b)
		{
			printf("NO BRAINS\n");
		}
		else
		{
			printf("MMM BRAINS\n");
		}
	}
}