#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l, n;
	while(cin>>l>>n)
	{
		vector<int> left, right;
		vector<int> id;
		for(int i=0;i<n;i++)
		{
			int a;
			char b;
			scanf("%d %c", &a, &b);
			id.push_back(a);
			if(b=='L')
			{
				left.push_back(a);
			}
			else
			{
				right.push_back(l-a);
			}
		}
		sort(id.begin(), id.end());
		sort(left.begin(), left.end());
		sort(right.begin(), right.end());
		reverse(right.begin(), right.end());
		vector<pair<int, int> > ans;
		for(int i=0;i<n;i++)
		{
			if(i<left.size())
			{
				ans.push_back({left[i], id[i]});
			}
			else
			{
				ans.push_back({right[i-left.size()], id[i]});
			}
		}
		sort(ans.begin(), ans.end());
		if(n>=2 && ans[ans.size()-1].first == ans[ans.size()-2].first)
		{
			printf("The last ant will fall down in %d seconds - started at %d and %d.\n", ans[ans.size()-1].first, min(ans[ans.size()-1].second, ans[ans.size()-2].second), max(ans[ans.size()-1].second, ans[ans.size()-2].second));
		}
		else
		{
			printf("The last ant will fall down in %d seconds - started at %d.\n", ans[ans.size()-1].first, ans[ans.size()-1].second);
		}
	}
}