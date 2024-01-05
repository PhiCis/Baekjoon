#include<bits/stdc++.h>
using namespace std;

int n, c[10010], invc[10010], k, a[10010], prev[10010], dp[10010];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
		invc[c[i]]=i;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		a[invc[k]]=i;
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
	cout<<v.size()<<"\n";
	int tmp=v.size();
	vector<int> ans;
	for(int i=n;i>=1;i--)
	{
		if(dp[i]==tmp)
		{
			ans.push_back(c[i]);
			tmp--;
		}
	}
	sort(ans.begin(), ans.end());
	for(auto i:ans) cout<<i<<" ";
}