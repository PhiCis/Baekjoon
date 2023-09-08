#include<bits/stdc++.h>
using namespace std;
#define mod 600921647
typedef long long ll;

vector<vector<ll> > I;

vector<vector<ll> > mul(vector<vector<ll> > a, vector<vector<ll> > b)
{
	vector<vector<ll> > tmp(a.size(), vector<ll>(a.size(), 0));
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			for(int k=0;k<a.size();k++)
			{
				tmp[i][j]+=a[i][k]*b[k][j]%mod;
				tmp[i][j]%=mod;
			}
		}
	}
	return tmp;
}

vector<vector<ll> > sum(vector<vector<ll> > a, vector<vector<ll> > b)
{
	vector<vector<ll> > tmp(a.size(), vector<ll>(a.size(), 0));
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			tmp[i][j]=(a[i][j]+b[i][j])%mod;
		}
	}
	return tmp;
}

vector<vector<ll> > sub(vector<vector<ll> > a, vector<vector<ll> > b)
{
	vector<vector<ll> > tmp(a.size(), vector<ll>(a.size(), 0));
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<a.size();j++)
		{
			tmp[i][j]=(a[i][j]-b[i][j]+mod)%mod;
		}
	}
	return tmp;
}

vector<vector<ll> > power(vector<vector<ll> > a, ll n)
{
	vector<vector<ll> > ret(a.size(), vector<ll>(a.size(), 0));
	if(n==0)
	{
		for(int i=0;i<a.size();i++) ret[i][i]=1;
		return ret;
	}
	ret=power(a, n/2);
	vector<vector<ll> > tmp=mul(ret, ret);
	if(n&1)
	{
		ret=tmp;
		tmp=mul(ret, a);
	}
	return tmp;
}

ll n;
ll a[1010], b[1010];
ll m;
char c[10][10];
ll A, B;

vector<vector<ll> > f(vector<vector<ll> > a, ll n)
{
	if(n==0) return I;
	ll m=n>>1;
	vector<vector<ll> > tmp = f(a, m);
	if(n%2==0)
	{
		vector<vector<ll> > ttmp=power(a, m);
		return sub(mul(sum(ttmp, I), tmp), ttmp);
	}
	else
	{
		return mul(sum(power(a, m+1), I), tmp);
	}
	
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c[i][j];
		}
	}
	cin>>A>>B;
	vector<vector<ll> > v(9*m, vector<ll>(9*m, 0));
	
	I.resize(9*m);
	for(int i=0;i<9*m;i++)
	{
		I[i].resize(9*m, 0);
		I[i][i]=1;
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<8;j++)
		{
			v[i*9+j][i*9+j+1]=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(c[a[i]][j]=='Y')
			{
				v[a[i]*9+b[i]-1][j*9]++;
			}
		}
	}
//	for(auto i:v)
//	{
//		for(auto j:i)
//		{
//			cout<<j<<" ";
//		}
//		cout<<"\n";
//	}
	vector<vector<ll> > ans = mul(power(v, A-1), f(v, B-A));
	ll ANS=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			ANS+=ans[j*9][a[i]*9+b[i]-1];
			ANS%=mod;
		}
	}
	cout<<ANS;
}