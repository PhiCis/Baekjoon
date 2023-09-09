#include<bits/stdc++.h>
using namespace std;

string s;
int k;
map<char, bool> m;
int cnt;

int main()
{
	cin>>s>>k;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a') s[i]=(char)(s[i]-'a'+'A');
	}
	for(int i=0;i<s.size();i++)
	{
		if(i==0||s[i]==s[i-1]) continue;
		if(m[s[i-1]])
		{
			cnt=i;
		}
		else
		{
			m[s[i-1]]=true;
			if(i-cnt>=k) cout<<1;
			else cout<<0;
			cnt=i;
		}
	}
	if(m[s[s.size()-1]])
	{
		cnt=s.size();
	}
	else
	{
		m[s[s.size()-1]]=true;
		if(s.size()-cnt>=k) cout<<1;
		else cout<<0;
		cnt=s.size();
	}
}