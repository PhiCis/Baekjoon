#include<bits/stdc++.h>
using namespace std;
#define MOD 31991
typedef long long ll;

struct MATRIX{
	int sz;
	vector<vector<ll> > a;
	MATRIX()
	{
		sz=0;
	}
	MATRIX(int n)
	{
		sz=n;
		a=vector<vector<ll> >(n, vector<ll>(n));
	}
	
	MATRIX operator * (const MATRIX &x)
	{
		MATRIX ret(sz);
		for(int i=0;i<sz;i++)
		{
			for(int j=0;j<sz;j++)
			{
				for(int k=0;k<sz;k++)
				{
					ret.a[i][j]+=a[i][k]*x.a[k][j];
					ret.a[i][j]%=MOD;
				}
			}
		}
		return ret;
	}
	
	void init()
	{
		for(int i=0;i<sz;i++)
		{
			a[i][i]=1;
		}
		return;
	}
};

MATRIX power(MATRIX a, ll b)
{
	MATRIX ret(a.sz);
	ret.init();
	while(b)
	{
		if(b&1) ret=ret*a;
		a=a*a;
		b>>=1;
	}
	return ret;
}

int main()
{
	int d, t;
	scanf("%d%d", &d, &t);
	MATRIX m(d), ans(d);
	for(int i=0;i<d-1;i++)
	{
		m.a[i+1][i]=1;
	}
	for(int i=0;i<d;i++)
	{
		m.a[0][i]=1;
	}
	ans=power(m, t);
	printf("%d", ans.a[0][0]);
}