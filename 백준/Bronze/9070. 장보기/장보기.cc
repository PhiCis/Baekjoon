#include<bits/stdc++.h>
using namespace std;

int t, n, w[110], c[110];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<pair<double, int> > v;
		for(int i=1;i<=n;i++)
		{
			cin>>w[i]>>c[i];
			v.push_back({(double)c[i]/w[i], c[i]});
		}
		sort(v.begin(), v.end());
		cout<<v[0].second<<"\n";
	}
}