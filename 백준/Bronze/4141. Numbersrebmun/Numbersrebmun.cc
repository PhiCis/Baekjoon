#include<bits/stdc++.h>
using namespace std;

int a[30];

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a') s[i]=(char)(s[i]-'a'+'A');
			if(s[i]<='C') a[i]=2;
			else if(s[i]<='F') a[i]=3;
			else if(s[i]<='I') a[i]=4;
			else if(s[i]<='L') a[i]=5;
			else if(s[i]<='O') a[i]=6;
			else if(s[i]<='S') a[i]=7;
			else if(s[i]<='V') a[i]=8;
			else if(s[i]<='Z') a[i]=9;
		}
		for(int i=0;i<s.size();i++)
		{
			if(a[i]!=a[s.size()-1-i])
			{
				cout<<"NO\n";
				goto skip;
			}
		}
		cout<<"YES\n";
		skip:;
	}
}