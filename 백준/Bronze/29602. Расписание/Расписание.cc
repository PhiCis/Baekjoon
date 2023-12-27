#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int> > v;
int ans[110];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		v.push_back({a, i});
	}
	sort(v.begin(), v.end());
	for(int i=0;i<n;i++)
	{
		ans[v[i].second]=i+1;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
}