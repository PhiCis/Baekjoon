#include<bits/stdc++.h>
using namespace std;

string s, t;
int ans;

int main()
{
	cin>>s>>t;
	for(int i=0;i<=s.size()-t.size();i++)
	{
		for(int j=0;j<t.size();j++)
		{
			if(s[i+j]==t[j]) goto skip;
		}
		ans++;
		skip:;
	}
	cout<<ans;
}