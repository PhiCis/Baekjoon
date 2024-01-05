#include<bits/stdc++.h>
using namespace std;

int n, t;
int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		long long ans=0;
		cin>>n;
		vector<int> a(n+1, 0);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=n;j++)
		{
			vector<int> dp(n+1, 0);
			vector<int> v;
			v.clear();
			for(int i=j;i<=n;i++)
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
				ans+=v.size();
			}
		}
		cout<<"Case #"<<x<<": ";
		cout<<ans<<"\n";
	}
}