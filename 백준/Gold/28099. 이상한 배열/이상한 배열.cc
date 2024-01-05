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
	T[id]=max(T[id*2], T[id*2+1]);
}
int query(int id, int s, int e, int l, int r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id];
	int m=s+e>>1;
	return max(query(id*2, s, m, l, r), query(id*2+1, m+1, e, l, r));
}
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		T.clear();
		T.resize(4*n+4);
		map<int, int> m;
		vector<int> a(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			update(1, 1, n, i, a[i]);
		}
		for(int i=1;i<=n;i++)
		{	
			if(m[a[i]])
			{
				if(query(1, 1, n, m[a[i]], i)>a[i])
				{
					cout<<"No\n";
					goto skip;
				}
			}
			m[a[i]]=i;
		}
		cout<<"Yes\n";
		skip:;
	}
}