#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

ll n, ans[4];
vector<ll> factor;
vector<ll> square[2];

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
			x=y=rand()%(n-2);
            c=rand()%10+1;
            g=1;
		}
		x=((__int128_t)x*x%n+c)%n;
		y=((__int128_t)y*y%n+c)%n;
		y=((__int128_t)y*y%n+c)%n;
		g=__gcd(abs(x-y), n);
	} while(g==1);
	
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
		int sz=r.size();
		q.push_back(r[sz-2]/r[sz-1]);
		if(r[sz-2]%r[sz-1]==0) break;
		r.push_back(r[sz-2]%r[sz-1]);
	}
	int sz=q.size();
	s.push_back(1);
	s.push_back(0);
	for(int i=2;i<=sz;i++)
	{
		s.push_back(s[i-2]-s[i-1]*q[i-1]);
	}
	t.push_back(0);
	t.push_back(1);
	for(int i=2;i<=sz;i++)
	{
		t.push_back(t[i-2]-t[i-1]*q[i-1]);
	}
	ll sqrtp=sqrt(p);
	for(int i=0;i<=sz;i++)
	{
		if(r[i]<=sqrtp&&r[i]>0&&abs(s[i])<=sqrtp&&abs(s[i])>0)
		{
			return {r[i], abs(s[i])};
		}
	}
}

bool sts(ll n)
{
	ll N = 1;
	map<ll, bool> cnt;
	factor.clear();
	factorization(n);
	for(auto p:factor)
	{
		if(cnt[p])
		{
			cnt[p]=false;
			N*=p;
		}
		else
		{
			cnt[p]=true;
		}
	}
	for(auto p:factor)
	{
		if(p%4==3&&cnt[p]) return false;
	}
	square[0].clear();
	square[1].clear();
	for(auto p:factor)
	{
		if(cnt[p]==true)
		{
			ll a=modsqrt(p-1, p);
			pair<ll, ll> x=thue(a, p);
			square[0].push_back(x.first);
			square[1].push_back(x.second);
			cnt[p]=false;
		}
	}
	
	ans[0]=N;
	ans[1]=0;
	
	ll sz=square[0].size();
	ll tmp[2];
	
	for(ll i=0;i<sz;i++)
	{
		tmp[0]=(ll)((lll)ans[0]*square[0][i]+(lll)ans[1]*square[1][i]);
		tmp[1]=(ll)((lll)ans[0]*square[1][i]-(lll)ans[1]*square[0][i]);
		ans[0]=abs(tmp[0]);
		ans[1]=abs(tmp[1]);
	}
	
	return true;
}

void sfs(ll n)
{
	ll r=0;
	
	if(n%4==0)
	{
		while(n%4==0)
		{
			n/=4;
			r++;
		}
		sfs(n);
		for(int i=0;i<4;i++)
		{
			ans[i]*=(1<<r);
		}
		return;
	}
	
	if(n%8==7)
	{
		sfs(n-1);
		ans[3]=1;
		return;
	}
	
	if(sts(n)==false)
	{
		ll i=2;
		if(n%4==3) i=1;
		ans[2]=i;
		
		while(sts(n-i*i)==false)
		{
			i+=2;
			ans[2]=i;
		}
		return;
	}
}

int main()
{
	srand(time(NULL));
	scanf("%lld", &n);
	for(ll i=0;i<4;i++) ans[i]=0;
	
	sfs(n);
	
	ll cnt=0;
	for(ll i=0;i<4;i++) if(ans[i]) cnt++;
	printf("%lld\n", cnt);
	for(ll i=0;i<4;i++)	if(ans[i]) printf("%lld ", ans[i]);
	printf("\n");
}