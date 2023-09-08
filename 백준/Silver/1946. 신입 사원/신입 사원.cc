#include<bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<pair<int, int> > v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i].first>>v[i].second;
		}
		sort(v.begin(), v.end());
		int ans=0, tmp;
		ans++;
		tmp=v[0].second;
		for(int i=1;i<n;i++)
		{
			if(tmp>v[i].second)
			{
				ans++;
				tmp=v[i].second;
			}
		}
		cout<<ans<<"\n";
	}
}