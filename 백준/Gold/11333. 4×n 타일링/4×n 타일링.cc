#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long f[10010], sum;
int T, N;
int main()
{
	f[3]=3, f[6]=13;
	sum=17;
	for(int i=9;i<=10000;i+=3)
	{
		f[i]=(2*f[i-3]-f[i-6]+2*sum+MOD)%MOD;
		sum=(sum+f[i])%MOD;
	}
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		printf("%lld\n", f[N]);
	}
}