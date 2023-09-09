#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long m, x[1010], y[1010], z[1010], v[1010], r[1010], n, xx[1010], yy[1010], zz[1010], dx[1010], dy[1010], dz[1010], d, ans;

ll sq(ll a)
{
	return a*a;
}

int main()
{
	scanf("%lld", &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld%lld%lld%lld%lld", &x[i], &y[i], &z[i], &v[i], &r[i]);
	}
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld", &xx[i], &yy[i], &zz[i]);
		dx[i]=xx[i]-xx[i-1];
		dy[i]=yy[i]-yy[i-1];
		dz[i]=zz[i]-zz[i-1];
	}
	scanf("%lld", &d);
	for(int i=1;i<=m;i++)
	{
		r[i]+=d;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{	
			if(((x[i]-xx[j])*dx[j]+(y[i]-yy[j])*dy[j]+(z[i]-zz[j])*dz[j])*((x[i]-xx[j-1])*dx[j]+(y[i]-yy[j-1])*dy[j]+(z[i]-zz[j-1])*dz[j])>=0)
			{
				if(sq(r[i])>=sq(xx[j]-x[i])+sq(yy[j]-y[i])+sq(zz[j]-z[i])||sq(r[i])>=sq(xx[j-1]-x[i])+sq(yy[j-1]-y[i])+sq(zz[j-1]-z[i]))
				{
					ans+=v[i];
					break;
				}
			}
			else
			{
				if(sq(r[i])*(sq(dx[j])+sq(dy[j])+sq(dz[j]))>=sq((xx[j]-x[i])*dy[j]-(yy[j]-y[i])*dx[j])+sq((yy[j]-y[i])*dz[j]-(zz[j]-z[i])*dy[j])+sq((zz[j]-z[i])*dx[j]-(xx[j]-x[i])*dz[j]))
				{
					ans+=v[i];
					break;
				}
			}			
		}
	}
	printf("%lld", ans);
}