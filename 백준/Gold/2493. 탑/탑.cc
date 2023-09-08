#include<bits/stdc++.h>
using namespace std;
stack<pair<int, int> > s;
int ans[500500];
int n;
pair<int, int> a[500500];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i].first);
		a[i].second=i;
	}
	for(int i=n;i>=1;i--)
	{
		if(s.empty())
		{
			s.push(a[i]);
		}
		else
		{
			while(!s.empty()&&a[i].first>s.top().first)
			{
				ans[s.top().second]=a[i].second;
				s.pop();
			}
			s.push(a[i]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ", ans[i]);
	}
}