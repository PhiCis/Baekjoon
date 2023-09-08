#include<bits/stdc++.h>
using namespace std;

long long f[21]={1,};

long long a;
int main()
{
	for(long long i=1;i<=20;i++)
	{
		f[i]=f[i-1]*i;
	}
	scanf("%lld", &a);
	if(!a)
	{
		printf("NO");
		return 0;
	} 
	for(long long i=0;i<(1ll<<21)-1;i++)
	{
		long long tmp=0;
		for(long long j=0;j<=20;j++)
		{
			if((i>>j)&1ll) tmp+=f[j];
		}
		if(tmp==a)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}