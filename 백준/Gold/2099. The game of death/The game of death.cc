#include<bits/stdc++.h>
using namespace std;
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
					ret.a[i][j]=a[i][k]*x.a[k][j];
					if(ret.a[i][j]==1) break;
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
	int n, k, m;
	scanf("%d%d%d", &n, &k, &m);
	MATRIX mat(n), ans(n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d", &a);
		mat.a[i][a-1]=1;
		scanf("%d", &a);
		mat.a[i][a-1]=1;
	}
	ans=power(mat, k);
	for(int i=1;i<=m;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(ans.a[a-1][b-1]) printf("death\n");
		else printf("life\n");
	}
}