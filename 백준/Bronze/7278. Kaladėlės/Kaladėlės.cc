#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > v;
int n, a;

int main()
{
	cin>>n;
	for(int i=1;i<=3;i++)
	{
		cin>>a;
		v.push_back({min(n-(n/a*a), (n/a*a+a)-n), a});
	}
	sort(v.begin(), v.end());
	if(n-(n/v[0].second*v[0].second)==v[0].first)
	{
		cout<<v[0].second<<" "<<n-v[0].first;
	}
	else
	{
		cout<<v[0].second<<" "<<n+v[0].first;
	}
}