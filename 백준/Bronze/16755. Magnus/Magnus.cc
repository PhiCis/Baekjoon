#include<bits/stdc++.h>
using namespace std;

int ans;
string s, t="HONI";

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==t[ans%4]) ans++;
	}
	cout<<ans/4;
}