#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

ll n, k;

vector<vector<ll> > a(100, vector<ll>(100));
vector<vector<ll> > res(100, vector<ll>(100));
vector<vector<ll> > id(100, vector<ll>(100));

vector<vector<ll> > mlt(vector<vector<ll> > a, vector<vector<ll> > b)
{
	vector<vector<ll> > ans(100, vector<ll>(100));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				ans[i][j]=(ans[i][j]+a[i][k]*b[k][j])%MOD;
			}
		}
	}
	return ans;
}

vector<vector<ll> > power(vector<vector<ll> > a, ll k)
{
	if(k==0) return id;
	vector<vector<ll> > tmp = power(a, k/2);
	tmp = mlt(tmp, tmp);
	if(k&1) tmp = mlt(tmp, a);
	return tmp;
}

int main()
{
	for(int i=0;i<100;i++)
	{
		id[i][i]=1;
	}
	scanf("%lld%lld", &n, &k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%lld", &a[i][j]);
		}
	}
	res = power(a, k);
	ll ANS = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ANS+=res[i][j];
			ANS%=MOD;
		}
	}
	printf("%lld", ANS);
}