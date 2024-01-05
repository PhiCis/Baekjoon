#include<bits/stdc++.h>
using namespace std;

int t, n;
vector<int> T;
void update(int id, int s, int e, int t, int v)
{
	if(t<s||e<t) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	int m=s+e>>1;
	update(id*2, s, m, t, v);
	update(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}
int query(int id, int s, int e, int l, int r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	int m=s+e>>1;
	return query(id*2, s, m, l, r)+query(id*2+1, m+1, e, l, r);
}
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	while(1)
	{
		cin>>n;
		if(!n) return 0;
		vector<int> a(n+1), id(n+1);
		T.clear();
		T.resize(4*n+4);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			id[a[i]]=i;
		}
		long long ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=query(1, 1, n, id[i], n);
			update(1, 1, n, id[i], 1);
		}
		if(ans%2==0) cout<<"Permutaci lze prevest.\n";
		else cout<<"Matfyzacci maji smulu.\n";
	}
}