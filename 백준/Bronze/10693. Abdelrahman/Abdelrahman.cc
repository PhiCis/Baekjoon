#include<bits/stdc++.h>
using namespace std;

int t, a, b;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d", &a, &b);
		printf("Case %d: %d\n", i, b-a+1);
	}
}