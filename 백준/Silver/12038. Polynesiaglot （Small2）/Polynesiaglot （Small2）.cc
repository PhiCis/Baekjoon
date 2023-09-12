#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long a[60][60];
int T, C, V, L;

long long power(long long a, long long b)
{
	long long ans=1;
	while(b)
	{
		if(b&1) ans=(ans*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return ans;
}

int main()
{
	for(int i=0;i<=50;i++)
	{
		a[i][i]=a[i][0]=1;
	}
	for(int i=2;i<=50;i++)
	{
		for(int j=1;j<i;j++)
		{
			a[i][j]=(a[i-1][j-1]+a[i-1][j])%MOD;
		}
	}
	scanf("%d", &T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d%d%d", &C, &V, &L);
		long long ans=0;
		for(int i=0;L-i>=i;i++)
		{
			ans=(ans+(power(C, i)*power(V, L-i)%MOD)*a[L-i][i])%MOD;
		}
		printf("Case #%d: %lld\n", i, ans);
	}
}