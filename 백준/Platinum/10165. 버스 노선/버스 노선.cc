#include<bits/stdc++.h>
using namespace std;
typedef pair<pair<int, int>, int> pi3;

int n, m;
vector<pi3> v1, v2, ans;

bool cmp1(const pi3 s, const pi3 t)
{
	if(s.first.first==t.first.first) return s.first.second>t.first.second;
	return s.first.first<t.first.first;
}

bool cmp2(const pi3 s, const pi3 t)
{
	return s.second<t.second;
}

int sz;

int main()
{
	scanf("%d%d", &n, &m);
	
	for(int i=0;i<m;i++)
	{
		int s, e;
		scanf("%d%d", &s, &e);
		if(s>e) v1.push_back({{s, e+n}, i+1});
		else v1.push_back({{s, e}, i+1});
	}
	
	sort(v1.begin(), v1.end(), cmp1);
	
	for(int i=0;i<m;i++)
	{
		if(v2.empty()) v2.push_back(v1[i]);
		else
		{
			if((v2.back()).first.second<v1[i].first.second) v2.push_back(v1[i]);
		}
	}
	
	sz=v2.size();
	
	for(int i=0;i<sz;i++)
	{
		if(v2[i].first.second<n)
		{
			v2[i].first.second+=n;
			v2[i].first.first+=n;
		}
	}
	
	sort(v2.begin(), v2.end(), cmp1);
	
	for(int i=0;i<sz;i++)
	{
		if(ans.empty()) ans.push_back(v2[i]);
		else
		{
			if((ans.back()).first.second<v2[i].first.second) ans.push_back(v2[i]);
		}
	}
	
	sort(ans.begin(), ans.end(), cmp2);
	
	sz=ans.size();
	
	for(int i=0;i<sz;i++)
	{
		printf("%d ", ans[i].second);
	}
}