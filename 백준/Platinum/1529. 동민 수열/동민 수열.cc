#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1234567891ll

ll n, l;

pair<bool, ll> g(ll a)
{
	ll res;
	while(a)
	{
		if(a%10!=4&&a%10!=7) return {false, 0};
		if(a<10) res = a;
		a/=10;
	}
	return {true, res};
}

vector<vector<ll> > s(4,vector<ll>(4, 0));
vector<vector<ll> > res(4,vector<ll>(4, 0));
ll x[4];
ll m[100], pnt;

vector<vector<ll> > mlt(vector<vector<ll> > a, vector<vector<ll> > b)
{
	vector<vector<ll> > tmp(4, vector<ll>(4, 0));
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			for(int k=0;k<4;k++)
			{
				tmp[i][j] = (tmp[i][j]+a[i][k]*b[k][j])%MOD;
			}
		}
	}
	return tmp;
}
ll a[100];
int main()
{
	for(int i=0;i<4;i++)
	{
		res[i][i]=1;
	}
	scanf("%lld%lld", &n, &l);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a+n);
	for(int i=0;i<n;i++)
	{
		if(i>0&&a[i]==a[i-1]) continue;
		pair<bool, ll> tmp = g(a[i]);
		if(tmp.first)
		{
			if(tmp.second==4)
			{
				if(a[i]%10==4)
				{
					x[0]++;
				}
				else
				{
					x[1]++;
				}
			}
			else
			{
				if(a[i]%10==4)
				{
					x[2]++;
				}
				else
				{
					x[3]++;
				}
			}
		}
	}
	s[0][0]=s[0][2]=x[0];
	s[1][0]=s[1][2]=x[1];
	s[2][1]=s[2][3]=x[2];
	s[3][1]=s[3][3]=x[3];
	l--;
	while(l)
	{
		m[++pnt] = l&1;
		l>>=1;
	}
	for(int i=pnt;i>0;i--)
	{
		res = mlt(res, res);
		if(m[i]==1)
		{
			res = mlt(res, s);
		}
	}
	ll ans=0;
	for(int i=0;i<4;i++)
	{
		ans = (ans+(res[0][i]+res[1][i]+res[2][i]+res[3][i])%MOD*x[i])%MOD;
	}
	printf("%lld", ans);
}