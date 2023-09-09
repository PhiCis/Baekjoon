#include<bits/stdc++.h>
using namespace std;

int f(int k)
{
	int ret = 0;
	while(k)
	{
		ret*=10;
		ret += k%10;
		k/=10;
	}
	return ret;
}

bool c(int k)
{
	return k==f(k);
}

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int k;
		scanf("%d", &k);
		if(c(k+f(k)))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}