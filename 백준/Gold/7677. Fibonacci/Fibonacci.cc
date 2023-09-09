#include<bits/stdc++.h>
using namespace std;
#define MOD 10000
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
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==-1) return 0;
		MATRIX map(2), ans(2);
		map.a[0][0]=map.a[0][1]=map.a[1][0]=1;
		ans.a[0][0]=ans.a[1][1]=1;
		ans=power(map, n);
		printf("%d\n", ans.a[0][1]);
	}
}