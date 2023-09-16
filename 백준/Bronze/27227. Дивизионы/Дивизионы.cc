#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n;
	cin>>s;
	if(n<=1600)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='3')
			{
				cout<<3;
				return 0;
			}
		}
		for(int i=0;i<s.size();i++)
		{
			cout<<s[i]<<"\n";
		}
	}
	else if(n<=1900)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='2')
			{
				cout<<2;
				return 0;
			}
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='3') cout<<s[i]<<"*"<<"\n";
			else cout<<s[i]<<"\n";
		}
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='1')
			{
				cout<<1;
				return 0;
			}
		}
		for(int i=0;i<s.size();i++)
		{
			cout<<s[i]<<"*\n";
		}
	}
}