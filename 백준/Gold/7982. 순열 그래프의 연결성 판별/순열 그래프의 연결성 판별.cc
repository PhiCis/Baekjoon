#include<bits/stdc++.h>
using namespace std;

int n, pnt=1, a;
stack<pair<int, int> > s;
pair<int, int> ans[1000010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		int x = a, y = a;
		while((!s.empty()) && s.top().second>=x)
		{
			y = max(y, s.top().second);
			x = min(x, s.top().first);
			s.pop();
		}
		s.push({x, y});
	}
	int sz = s.size();
	for(int i=0;i<sz;i++)
	{
		ans[sz-i]=s.top();
		s.pop();
	}
	printf("%d\n", sz);
	for(int i=1;i<=sz;i++)
	{
		printf("%d ", ans[i].second-ans[i].first+1);
		for(int j=ans[i].first;j<=ans[i].second;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}