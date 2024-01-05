#include<bits/stdc++.h>
using namespace std;

int n, t, k;
int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Case #"<<x<<"\n";
		cin>>n>>k;
		vector<int> a(n+1, 0), dp(n+1, 0);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		vector<int> v;
		for(int i=1;i<=n;i++)
		{
			if(v.empty())
			{
				v.push_back(a[i]);
				dp[i]=1;
			}
			else
			{
				int tmp = lower_bound(v.begin(), v.end(), a[i])-v.begin();
				if(tmp>=v.size())
				{
					v.push_back(a[i]);
					dp[i]=v.size();
				}
				else
				{
					v[tmp]=a[i];
					dp[i]=tmp+1;
				}
			}
		}
		if(v.size()>=k) cout<<1<<"\n";
		else cout<<0<<"\n";
	}
}