#include<bits/stdc++.h>
using namespace std;

int n, a[200200], dp[200200];

int main()
{
	cin>>n;
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
	cout<<n-v.size();
}