#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
ll ans[10], ANS;
vector<vector<ll> > a={//앞에 오는 0을 포함하지 않음 
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
{0, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
{9, 20, 20, 20, 20, 20, 20, 20, 20, 20 },
{189, 300, 300, 300, 300, 300, 300, 300, 300, 300 },
{2889, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000, 4000 },
{38889, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000, 50000 },
{488889, 600000, 600000, 600000, 600000, 600000, 600000, 600000, 600000, 600000 },
{5888889, 7000000, 7000000, 7000000, 7000000, 7000000, 7000000, 7000000, 7000000, 7000000 },
{68888889, 80000000, 80000000, 80000000, 80000000, 80000000, 80000000, 80000000, 80000000, 80000000 },
{788888889, 900000000, 900000000, 900000000, 900000000, 900000000, 900000000, 900000000, 900000000, 900000000 }
};
ll e[10]={1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
ll c[11];
void f(ll n, ll d)
{
	if(n<0) return;
	if(n==0)
	{
		ans[0]+=d;
		return;
	}
	ll tmp=n;
	ll cnt=-1;
	while(tmp)
	{
		cnt++;
		c[cnt]=tmp%10;
		tmp/=10;
	}
	tmp=n;
	tmp-=c[cnt]*e[cnt];
	ans[c[cnt]]+=d*(tmp+1);
	for(int i=c[cnt]-1;i>=1;i--)
	{
		ans[i]+=d*e[cnt];
		for(int j=0;j<10;j++)
		{
			ans[j]+=d*(cnt*e[cnt]/10);
		}
	}
	for(int i=0;i<10;i++)
	{
		ans[i]+=d*a[cnt][i];
	}
//	for(int i=0;i<10;i++)
//	{
//		printf("%d ", ans[i]);
//	}
//	printf("/%d\n", tmp);
	for(int i=cnt-1;i>=0;i--)
	{
		tmp-=c[i]*e[i];
		ans[c[i]]+=d*(tmp+1);
		for(int j=c[i]-1;j>=0;j--)
		{
			ans[j]+=d*e[i];
			for(int k=0;k<10;k++)
			{
				ans[k]+=d*(i*e[i]/10);
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	f(n-1, -1);
	f(m, 1);
	for(int i=0;i<10;i++) ANS+=i*ans[i];
	cout<<ANS;
}