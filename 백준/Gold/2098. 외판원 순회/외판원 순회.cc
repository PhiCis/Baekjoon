#include<bits/stdc++.h>
using namespace std;
#define INF 1e15

int n;
long long a[20][20];
long long dp[20][65536];

long long f(int id, int bit)
{
	if(bit==(1<<n)-1)
	{
		if(a[id][0]) return a[id][0];
		else return INF;
	}
	
	long long res=dp[id][bit];
	if(res) return res;
	
	res=INF;
	for(int i=0;i<n;i++)
	{
		if(a[id][i]==0||(bit&(1<<i))) continue;
		res=min(res, a[id][i]+f(i, bit|(1<<i)));
	}
	dp[id][bit]=res;
	return res;
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	printf("%lld", f(0, 1));
}