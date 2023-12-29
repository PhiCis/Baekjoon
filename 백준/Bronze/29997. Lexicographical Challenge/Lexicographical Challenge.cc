#include<bits/stdc++.h>
using namespace std;

vector<char> v[100010];
string s;
int n;

int main()
{
	cin>>s>>n;
	for(int i=0;i<s.size();i++)
	{
		v[i%n].push_back(s[i]);
	}
	for(int i=0;i<n;i++)
	{
		sort(v[i].begin(), v[i].end());
	}
	for(int i=0;i<s.size();i++)
	{
		cout<<v[i%n][0];
		v[i%n].erase(v[i%n].begin());
	}
}