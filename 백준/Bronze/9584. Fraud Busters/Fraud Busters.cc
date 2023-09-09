#include<bits/stdc++.h>
using namespace std;

string s;
int n;
vector<string> v;

int main()
{
	cin>>s>>n;
	for(int i=1;i<=n;i++)
	{
		string t;
		cin>>t;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='*'||s[i]==t[i]) continue;
			else goto skip;
		}
		v.push_back(t);
		skip:;
	}
	cout<<v.size()<<"\n";
	for(string i:v)
	{
		cout<<i<<"\n";
	}
}