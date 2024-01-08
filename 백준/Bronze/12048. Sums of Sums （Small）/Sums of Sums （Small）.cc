#include<bits/stdc++.h>
using namespace std;

int t, s[1100], a[1100];

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		int n, m;
		cin>>n>>m;
		vector<int> v;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			s[i]=s[i-1]+a[i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			{
				v.push_back(s[j]-s[i-1]);
			}
		}
		sort(v.begin(), v.end());
		vector<long long> ss;
		long long tmp=0;
		ss.push_back(tmp);
		for(int i=0;i<v.size();i++)
		{
			tmp+=v[i];
			ss.push_back(tmp);
		}
		cout<<"Case #"<<z<<":\n";
		for(int i=1;i<=m;i++)
		{
			int l, r;
			cin>>l>>r;
			cout<<ss[r]-ss[l-1]<<"\n";
		}
		
	}
}