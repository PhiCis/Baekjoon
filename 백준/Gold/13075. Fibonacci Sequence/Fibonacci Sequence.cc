#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000000


vector<vector<ll> > mul(vector<vector<ll> > A, vector<vector<ll> > B)
{
	vector<vector<ll> > C(2, vector<ll>(2));
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			for(int k=0;k<2;k++)
			{
				C[i][j]+=(A[i][k]*B[k][j]);
				C[i][j]%=mod;
			}
		}
	}
	return C;
}

ll binary_len(ll n)
{
	ll cnt=0;
	while(n)
	{
		cnt++;
		n>>=1;
	}
	return cnt;
}

ll bit_reverse(ll n)
{
	ll ret = 0;
	while(n)
	{
		ret<<=1;
		ret+=n%2;
		n>>=1;
	}
	return ret;
}

vector<vector<ll> > power(vector<vector<ll> > A, ll n)
{
	int len =binary_len(n);
	vector<vector<ll> > B=A;
	vector<vector<ll> > C(2, vector<ll>(2));
	C[0][0]=C[1][1]=1;
	n=bit_reverse(n);
	while(len--)
	{
		C=mul(C, C);
		if(n&1)
		{
			C=mul(C, B);
		}
		n>>=1;
	}
	return C;
}

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		vector<vector<ll> > ans = power({{1, 1}, {1, 0}}, n);
		printf("%lld\n", (ans[1][0])%mod);
				
	}
}