#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, a, b, c;
	scanf("%d%d", &n, &k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		if(n%(a*b)==0)
		{
			printf("%d\n", (b+c)*(n/(a*b)-1)+b);
		}
		else
		{
			printf("%d\n", (b+c)*(n/(a*b))+(n%(a*b)-1)/a+1);
		}
	}
}
