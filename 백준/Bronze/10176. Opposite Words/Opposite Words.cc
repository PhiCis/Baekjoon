#include<bits/stdc++.h>
using namespace std;

string s;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		int m[26]={0,};
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A'&&s[i]<='Z') m[s[i]-'A']++;
			if(s[i]>='a'&&s[i]<='z') m[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(m[i]!=m[25-i])
			{
				cout<<"No\n";
				goto skip;
			}
		}
		cout<<"Yes\n";
		skip:;
	}
}