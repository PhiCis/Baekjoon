#include<bits/stdc++.h>
using namespace std;

vector<int> v;
string s;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1') v.push_back(i);
	}
	int ans=max(v[0], (int)s.size()-1-v[v.size()-1]);
	for(int i=1;i<v.size();i++)
	{
		ans=max(ans, (v[i]-v[i-1])/2);
	}
	cout<<ans;
}