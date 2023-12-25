#include<bits/stdc++.h>
using namespace std;

string s;
int ans;
int main()
{
	cin>>s;
	for(int i=3;i<s.size();i++)
	{
		if(s[i-3]=='k'&&s[i-2]=='i'&&s[i-1]=='c'&&s[i]=='k') ans++;
	}
	cout<<ans;
}