#include<bits/stdc++.h>
using namespace std;
int t, n, a[1010], b[1010];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
		}
		vector<pair<int, pair<pair<int, int> , pair<int, int> > > > v;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				v.push_back({(a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]), {{a[i], b[i]}, {a[j], b[j]}}});
			}
		}
		sort(v.begin(), v.end());
		cout<<v[0].second.first.first<<" "<<v[0].second.first.second<<" "<<v[0].second.second.first<<" "<<v[0].second.second.second<<"\n";
	}
}