#include<bits/stdc++.h>
using namespace std;

int c[26], cnt;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		c[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(c[i]&1) cnt++;
	}
	cout<<max(0, cnt-1);
}