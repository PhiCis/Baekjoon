#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[300030], b[300030], c[300030];
int ans[3000100];

int T[12000200];
void updall(int id, int s, int e)
{
	if(s==e)
	{
		T[id]=1;
		return;
	}
	int mi=s+e>>1;
	updall(id*2, s, mi);
	updall(id*2+1, mi+1, e);
	T[id]=T[id*2]+T[id*2+1];
}

void upd(int id, int s, int e, int t, int v)
{
	if(t>e||s>t) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	int mi=s+e>>1;
	upd(id*2, s, mi, t, v);
	upd(id*2+1, mi+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}

int find(int id, int s, int e, int v)
{
	if(s==e) return s;
	int mi=s+e>>1;
	if(T[id*2]>=v) return find(id*2, s, mi, v);
	else return find(id*2+1, mi+1, e, v-T[id*2]);
}

int main()
{
	updall(1, 1, 3000000);
//	cout<<T[1];
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++) cin>>c[i];
	vector<pair<int, int> > v;
	for(int i=1;i<=n;i++)
	{
		v.push_back({0, 1});
		v.push_back({a[i], 1});
		v.push_back({a[i]+b[i], 3});
		v.push_back({a[i]+b[i]+c[i], -5});
	}
	sort(v.begin(), v.end());
	int tmp=0, pnt=0;
	for(int i=0;i<=3000000;i++)
	{
		while(pnt<(int)v.size() && v[pnt].first==i)
		{
			tmp+=v[pnt++].second;
		}
		ans[i+1]=tmp;
	}
//	for(int i=1;i<=10;i++)
//	{
//		cout<<ans[i]<<" ";
//	}
//	cout<<"\n";
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int q;
		cin>>q;
		int tmp=find(1, 1, 3000000, q);
//		cout<<tmp<<" ";
		cout<<ans[tmp]<<"\n";
		upd(1, 1, 3000000, tmp, 0);
//		cout<<T[1];
	}
}