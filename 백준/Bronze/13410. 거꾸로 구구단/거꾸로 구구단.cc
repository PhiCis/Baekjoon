#include<bits/stdc++.h>
using namespace std;

int f(int i)
{
	int res = 0;
	while(i)
	{
		res*=10;
		res+=i%10;
		i/=10;
	}
	return res;
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int ans = 0;
	for(int i=1;i<=k;i++)
	{
		ans = max(ans, f(i*n));
	}
	printf("%d", ans);
}