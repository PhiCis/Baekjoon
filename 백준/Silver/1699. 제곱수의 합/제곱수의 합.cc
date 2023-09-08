#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

ll n;

mt19937 engine((unsigned int)time(NULL));
uniform_int_distribution<ll> distribution1(0, 1e18);
auto generator1 = bind(distribution1, engine);
uniform_int_distribution<ll> distribution2(1, 10);
auto generator2 = bind(distribution2, engine);

vector<ll> factor, factor3;
vector<pair<ll, ll> > factor2;
vector<ll> square[2];
ll ans[4];
ll N, m, alpha;

ll power(ll a, ll b, ll m)
{
	lll ans=1, c=a%m;
	while(b)
	{
		if(b&1)
		{
			ans=ans*c%m;
		}
		c=c*c%m;
		b>>=1;
	}
	return (ll)ans;
}

bool chk(ll n, ll a, ll d, ll r)
{
	auto x=power(a, d, n);
	if(x==1||x==n-1) return false;
	for(ll i=1;i<r;i++)
	{
		x=(lll)x*x%n;
		if(x==n-1) return false;
	}
	return true;
}

bool millerrabin(ll n)
{
	if(n<2) return false;
	ll r=0, d=n-1;
	while(!(d&1))
	{
		d>>=1;
		r++;
	}
	for(ll a:{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
	{
		if(n==a) return true;
		if(chk(n, a, d, r)) return false;
	}
	return true;
}

void factorization(ll n)
{
	if(n==1) return;
	if(millerrabin(n))
	{
		factor.push_back(n);
		return;
	}
	ll x, y, c, g=n;
	do
	{
		if(n==4)
		{
			g=2;
			break;
		}
		if(g==n)
		{
			x=y=generator1()%(n-2);
    		c=generator2();
		}
		x=((lll)x*x%n+c)%n;
		y=((lll)y*y%n+c)%n;
		y=((lll)y*y%n+c)%n;
		g=__gcd(abs(x-y), n);
	}while(g==1);
	
	factorization(g);
	factorization(n/g);
	return;
}

ll nonresidue(ll p)
{
	ll res=2;
	while(1)
	{
		if(millerrabin(res))
		{
			if(power(res, (p-1)/2, p)==p-1) break;
		}
		res++;
	}
	return res;
}

ll modsqrt(ll a, ll p)
{
	ll Q=p-1, S=0;
	while(Q%2==0)
	{
		Q>>=1;
		S++;
	}
	ll z = nonresidue(p);
	ll M=S%p, c=power(z, Q, p), t=power(a, Q, p), R=power(a, (Q+1)/2, p);
	while(1)
	{
		if(t==0) return 0;
		if(t==1) return min(R, p-R);
		ll i=0, tmp=t;
		while(1)
		{
			i++;
			tmp=power(tmp, 2, p);
			if(tmp==1) break;
		}
		ll b=power(c, power(2, M-i-1, p-1), p);
		M=i%p;
		c=power(b, 2, p);
		t=(ll)((lll)t*power(b, 2, p)%p);
		R=(ll)((lll)R*b%p);
	}
}

pair<ll, ll> thue(ll a, ll p)
{
	vector<ll> r, q, s, t;
	r.push_back(a);
	r.push_back(p);
	q.push_back(0);
	while(1)
	{
		q.push_back(r[r.size()-2]/r[r.size()-1]);
		if(r[r.size()-2]%r[r.size()-1]==0) break;
		r.push_back(r[r.size()-2]%r[r.size()-1]);
	}
	s.push_back(1);
	s.push_back(0);
	for(int i=2;i<=q.size();i++)
	{
		s.push_back(s[i-2]-s[i-1]*q[i-1]);
	}
	t.push_back(0);
	t.push_back(1);
	for(int i=2;i<=q.size();i++)
	{
		t.push_back(t[i-2]-t[i-1]*q[i-1]);
	}
	for(int i=0;i<=q.size();i++)
	{
		if(r[i]<=sqrt(p)&&r[i]>0&&abs(s[i])<=sqrt(p)&&abs(s[i])>0)
		{
			return {r[i], abs(s[i])};
		}
	}
}

void step1()
{
	scanf("%lld", &n);
	if(n==1)
	{
		ans[0]=1;
		printf("1\n");
		//printf("1");
	}
}

void step2()
{
	ll r=0, s=n;
	while(s%4==0)
	{
		s/=4;
		r++;
	}
	if(s%8==7)
	{
		ans[3]=1<<r;
		n-=(1<<2*r);
		alpha=(1<<2*r);
		s--;
	}
}

void step3()
{
	ll i=0, n2, cnt;
retry:	
	n2=n-i*i;
	ans[2]=i;
	if(n2==1)
	{
		ans[0]=1;
		ans[1]=0;
		return;
	}
	if(n2==2)
	{
		ans[0]=ans[1]=1;
		return;
	}
	factor.clear();
	factor2.clear();
	factor3.clear();
	factorization(n2);
	sort(factor.begin(), factor.end());
	
	for(int j=0;j<factor.size();j++)
	{
		if(j==0) cnt=1;
		else if(factor[j]==factor[j-1]) cnt++;
		else
		{
			factor2.push_back({factor[j-1], cnt});
			cnt=1;
		}
	}
	factor2.push_back({factor[factor.size()-1], cnt});
	
	N=1, m=1;
	
	for(int j=0;j<factor2.size();j++)
	{
		if(factor2[j].first%4==3&&factor2[j].second%2==1)
		{
			i++;
			goto retry;
		}
		for(int k=0;k<factor2[j].second/2;k++)
		{
			N*=factor2[j].first;
		}
		if(factor2[j].second&1)
		{
			m*=factor2[j].first;
			factor3.push_back(factor2[j].first);
		}
	}
	
	for(ll p:factor3)
	{
		ll a=modsqrt(p-1, p);
		pair<ll, ll> x=thue(a, p);
		square[0].push_back(x.first);
		square[1].push_back(x.second);
	}
	
	ans[0]=N;
	ans[1]=0;
	
	ll tmp[2];
	for(int i=0;i<factor3.size();i++)
	{
		tmp[0]=(ll)((lll)ans[0]*square[0][i]+(lll)ans[1]*square[1][i]);
		tmp[1]=(ll)((lll)ans[0]*square[1][i]-(lll)ans[1]*square[0][i]);
		ans[0]=abs(tmp[0]);
		ans[1]=abs(tmp[1]);
	}
	
}

void step4()
{
	ll cnt=0;
	for(int i=0;i<4;i++)
	{
		if(ans[i]) cnt++;
	}
	printf("%lld\n", cnt);
	for(int i=0;i<4;i++)
	{
		//if(ans[i]) printf("%lld ", ans[i]);
	}
}

int main()
{
	step1();
	if(n>1)
	{
		step2();
		step3();
		step4();
	}
}