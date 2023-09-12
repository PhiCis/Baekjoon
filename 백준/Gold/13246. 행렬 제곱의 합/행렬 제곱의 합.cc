#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct MATRIX
{
    vector<vector<ll> > m;
	MATRIX(ll a, ll b)
	{
		m.resize(a, vector<ll>(b, 0));
	}
	MATRIX operator+(MATRIX a) const
    {
        MATRIX ret(m.size(), m[0].size());
        for (ll i = 0; i < m.size(); i++)
            for (ll j = 0; j < m[0].size(); j++)
            	ret.m[i][j] = (ret.m[i][j]+m[i][j]+a.m[i][j])%1000;
        return ret;
    }
    MATRIX operator-(MATRIX a) const
    {
        MATRIX ret(m.size(), m[0].size());
        for (ll i = 0; i < m.size(); i++)
            for (ll j = 0; j < m[0].size(); j++)
            	ret.m[i][j] = (ret.m[i][j]+m[i][j]-a.m[i][j]+1000)%1000;
        return ret;
    }
    MATRIX operator*(MATRIX a) const
    {
        MATRIX ret(m.size(), a.m[0].size());
        for (ll i = 0; i < m.size(); i++)
            for (ll j = 0; j < a.m[0].size(); j++)
                for (ll k = 0; k < m[0].size(); k++)
                    ret.m[i][j] = (ret.m[i][j] + m[i][k] * a.m[k][j])%1000;
        return ret;
    }
};

MATRIX power(MATRIX A, long long b, MATRIX I)
{
	if(b==0) return I;
	MATRIX tmp = power(A, b/2, I);
	if(b&1) return tmp*tmp*A;
	else return tmp*tmp;
}


MATRIX powersum(MATRIX A, ll b, MATRIX I)
{
	if(b==0) return I;
	if(b==1) return A+I;
	if(b%2==0) return power(A, b, I)+powersum(A, b-1, I);
	else return powersum(A, b>>1, I)*(power(A, b+1>>1, I)+I);
}

int main()
{
	ll n, b; 
	scanf("%lld%lld", &n, &b);
	MATRIX A(n, n), I(n, n);
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			scanf("%lld", &A.m[i][j]);
			I.m[i][j]=(i==j?1:0);
		}
	}
	MATRIX ans = powersum(A, b, I)-I;
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<n;j++)
		{
			printf("%lld ", ans.m[i][j]);
		}
		printf("\n");
	}
}