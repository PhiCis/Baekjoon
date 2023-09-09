#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int t, n;
pair<int, int> a[100010];
vector<int> idx;
ll ans;

int getidx(int x)
{
	return lower_bound(idx.begin(), idx.end(), x) - idx.begin() + 1;
}

int T[400040];

void upd(int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T[id]+=v;
		return;
	}
	int m = s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
	return;
}

int sum(int id, int s, int e, int l, int r)
{
	if(r<s||e<l) return 0;
	if(l<=s&&e<=r)
	{
		return T[id];
	}
	int m = s+e>>1;
	return sum(id*2, s, m, l, r)+sum(id*2+1, m+1, e, l, r);
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.first!=b.first)
	{
		return a.first>b.first;
	}
	else
	{
		return a.second<b.second;
	}
}

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		ans = 0;
		scanf("%d", &n);
		idx.clear();
		memset(T, 0, sizeof(T));
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d", &a[i].first, &a[i].second);
			idx.push_back(a[i].second);
		}
		sort(a+1, a+n+1, cmp);
		sort(idx.begin(), idx.end());
		idx.erase(unique(idx.begin(), idx.end()), idx.end());
		for(int i=1;i<=n;i++)
		{
//			printf("%d %d\n", a[i].first, a[i].second);
			ans+=sum(1, 1, n, 1, getidx(a[i].second));
			upd(1, 1, n, getidx(a[i].second), 1);
		}
		printf("%lld\n", ans);
	}
}