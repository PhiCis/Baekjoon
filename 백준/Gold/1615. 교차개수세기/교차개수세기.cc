#include<bits/stdc++.h>
using namespace std;

int n, m;
pair<int, int> v[2000200];
int T[8000800];

long long ans;

void upd(int id, int s, int e, int t, int v)
{
	if(t>e||t<s) return;
	if(s==e)
	{
		T[id]+=v;
		return;
	}
	int m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}

int sum(int id, int s, int e, int l, int r)
{
	if(r<s||e<l) return 0;
	if(l<=s&&e<=r) return T[id];
	int m=s+e>>1;
	return sum(id*2, s, m, l, r)+sum(id*2+1, m+1, e, l, r);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	sort(v+1, v+m+1);
	for(int i=1;i<=m;i++)
	{
		if(v[i].second!=n) ans+=sum(1, 1, n, v[i].second+1, n);
		upd(1, 1, n, v[i].second, 1);
//		cout<<ans<<"\n";
	}
	cout<<ans;
}