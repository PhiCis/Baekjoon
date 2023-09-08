#include<bits/stdc++.h>
using namespace std;

int n;
pair<int ,int> a[10010];
int ans;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].first>>a[i].second;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j) continue;
			if(a[j].first<a[i].first&&a[j].second<=a[i].second) goto skip;
			if(a[j].second<a[i].second&&a[j].first<=a[i].first) goto skip;
		}
		ans++;
		skip:;
	}
	cout<<ans;
}