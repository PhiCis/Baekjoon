#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Query{
	ll s, e, id;
};

ll n, a[100010], m;
ll sqn, ans[100010];
ll c[100010], cc[100010], ANS;
vector<Query> query;

bool cmp(Query s, Query t)
{
	ll right_block_s = s.e/sqn;
	ll right_block_t = t.e/sqn;
	return right_block_s == right_block_t ? s.s < t.s : s.e < t.e;
}

void add(ll k)
{
	cc[c[k]]--;
	c[k]++;
	cc[c[k]]++;
	ANS=max(ANS, c[k]);
}

void sub(ll k)
{
	cc[c[k]]--;
	c[k]--;
	cc[c[k]]++;
}

vector<ll> idx;
ll getidx(ll x)
{
	return lower_bound(idx.begin(), idx.end(), x)-idx.begin()+1;
}

int main()
{
	while(1)
	{
		n=m=sqn=ANS=0;
		query.clear();
		memset(a, 0, sizeof(a));
		memset(ans, 0, sizeof(ans));
		memset(c, 0, sizeof(c));
		memset(cc, 0, sizeof(cc));
		scanf("%lld", &n);
		if(n==0) return 0;
		scanf("%lld", &m);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld", &a[i]);
			idx.push_back(a[i]);
		}
		sort(idx.begin(), idx.end());
		idx.erase(unique(idx.begin(), idx.end()), idx.end());
		for(ll i=0;i<n;i++)
		{
			a[i]=getidx(a[i]);
		}
		
		for(ll i=0;i<m;i++)
		{
			ll s, e;
			scanf("%lld%lld", &s, &e);
			query.push_back({s-1, e-1, i});
		}
		
		sqn=sqrt(n);
		sort(query.begin(), query.end(), cmp);
		
		ll s=0, e=0;
		cc[0]=n+1;
		add(a[0]);
	
			
		for(auto next:query)
		{
			ll ns=next.s;
			ll ne=next.e;
			
			
			for(ll i=s-1;i>=ns;i--) add(a[i]);
			
			for(ll i=e+1;i<=ne;i++) add(a[i]);
			
			for(ll i=s;i<ns;i++) sub(a[i]);
			
			for(ll i=e;i>ne;i--) sub(a[i]);
			
			s=ns;
			e=ne;
			
			while(cc[ANS]==0) ANS--;
			ans[next.id]=ANS;
		}
		for(ll i=0;i<m;i++)
		{
			printf("%lld\n", ans[i]);
		}
	}
	
}