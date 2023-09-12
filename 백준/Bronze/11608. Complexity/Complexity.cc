#include<bits/stdc++.h>
using namespace std;

int a[30];
string s;
vector<int> ans;

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		a[s[i]-'a']++;
	}
	for(int i=0;i<30;i++)
	{
		if(a[i]) ans.push_back(a[i]);
	}
	sort(ans.begin(), ans.end());
	if(ans.size()<=2) cout<<0;
	else
	{
		int ANS = 0;
		for(int i=0;i<ans.size()-2;i++)
		{
			ANS+=ans[i];
		}
		cout<<ANS;
	}
}