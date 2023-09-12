#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll A;

ll calc_F(ll n)
{
	ll a[8][8]={
		0, 1, 0, 0, 0, 0, 0, 1,
		1, 0, 1, 0, 0, 0, 0, 1, 
		0, 1, 0, 1, 0, 0, 1, 1,
		0, 0, 1, 0, 1, 0, 1, 0,
		0, 0, 0, 1, 0, 1, 0, 0,
		0, 0, 0, 0, 1, 0, 1, 0,
		0, 0, 1, 1, 0, 1, 0, 1,
		1, 1, 1, 0, 0, 0, 1, 0
	};
	ll f[8][8]={
		1, 0, 0, 0, 0, 0, 0, 0,
		0, 1, 0, 0, 0, 0, 0, 0, 
		0, 0, 1, 0, 0, 0, 0, 0, 
		0, 0, 0, 1, 0, 0, 0, 0, 
		0, 0, 0, 0, 1, 0, 0, 0,
		0, 0, 0, 0, 0, 1, 0, 0, 
		0, 0, 0, 0, 0, 0, 1, 0,
		0, 0, 0, 0, 0, 0, 0, 1
	};
	while(n)
	{
		if(n&1)
		{
			ll tmp[8][8]={0};
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<8;j++)
				{
					for(int k=0;k<8;k++)
					{
						tmp[i][j]+=a[i][k]*f[k][j];
						tmp[i][j]%=MOD;
					}
				}
			}
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<8;j++)
				{
					f[i][j]=tmp[i][j];
				}
			}
		}
		ll tmp[8][8]={0};
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				for(int k=0;k<8;k++)
				{
					tmp[i][j]+=a[i][k]*a[k][j];
					tmp[i][j]%=MOD;
				}
			}
		}
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				a[i][j]=tmp[i][j];
			}
		}
		n>>=1;
	}
	return f[0][0];
}

int main()
{
	scanf("%lld", &A);
	printf("%lld", calc_F(A));
}