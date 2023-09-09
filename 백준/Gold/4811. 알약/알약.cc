#include<bits/stdc++.h>
using namespace std;

long long c[35];
int n;
int main()
{
	c[0]=1ll;
	for(int i=1;i<=30;i++)
	{
		for(int j=0;j<i;j++)
		{
			c[i]+=c[j]*c[i-j-1];
		}
	}
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		printf("%lld\n", c[n]);
	}
}