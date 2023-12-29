#include<bits/stdc++.h>
using namespace std;

string s;
string t;

int main()
{
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if('a'<=s[i] && s[i]<='z') t+=(char)(s[i]-'a'+'A');
		if('A'<=s[i] && s[i]<='Z') t+=s[i];
	}
	t+="?!";
//	cout<<t;
	for(int i=0;i<t.size()-2;i++)
	{
		if(t[i]==t[i+1] || t[i]==t[i+2])
		{
			cout<<"Palindrome";
			return 0;
		}
	}
	cout<<"Anti-palindrome";
}