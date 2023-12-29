#include<bits/stdc++.h>
using namespace std;

string s, t;
int a, b;

int main()
{
	cin>>s>>t;
	a=s.size();
	b=-1;
	for(int i=1;i<s.size();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			a=i;
			break;
		}
	}
	for(int i=t.size()-2;i>=0;i--)
	{
		if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u')
		{
			b=i;
			break;
		}
	}
	if(b!=-1)
	{
		for(int i=0;i<a;i++) cout<<s[i];
		for(int j=b;j<t.size();j++) cout<<t[j];
	}
	else if(a!=s.size())
	{
		for(int i=0;i<=a;i++) cout<<s[i];
		for(int j=b+1;j<t.size();j++) cout<<t[j];
	}
	else
	{
		for(int i=0;i<a;i++) cout<<s[i];
		cout<<"o";
		for(int j=b+1;j<t.size();j++) cout<<t[j];
	}
}