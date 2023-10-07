#include<bits/stdc++.h>
using namespace std;

int n, a, b, c, d;
vector<pair<pair<int, int> , int > > v;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c>>d;
		v.push_back({{b*c*d, b+c+d},a});
	}
	sort(v.begin(), v.end());
	for(int i=1;i<=3;i++)
	{
		cout<<v[i-1].second<<" ";
	}
}