#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int a, b;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d", &a, &b);
		printf("Case #%d: %d\n", i, (int)(pow((double)b, 1.0/3))-(int)(pow((double)(a-1), 1.0/3)));
	}
}