#include<bits/stdc++.h>
using namespace std;
#define MOD 1000003
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
	int n, s, e, t;
	scanf("%d%d%d%d", &n, &s, &e, &t);
	s--, e--;
	MATRIX m(n*5), ans(n*5);
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<5;j++)
		{
			m.a[i*5+j][i*5+j-1]=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int k;
			scanf("%1d", &k);
			if(k)
			{
				m.a[i*5][j*5+k-1]=1;
			}
		}
	}
	ans=power(m, t);
	printf("%d", ans.a[s*5][e*5]);
}