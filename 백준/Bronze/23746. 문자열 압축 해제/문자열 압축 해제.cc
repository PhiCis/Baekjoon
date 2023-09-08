#include<bits/stdc++.h>
using namespace std;

map<char, string> m;
int n;
string a;
char b;
int c, d;
string s, t;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>a>>b;
		m[b]=a;
	}
	cin>>s;
	for(int i=0;i<s.size();i++) t+=m[s[i]];
	cin>>c>>d;
	for(int i=c-1;i<=d-1;i++)
	{
		cout<<t[i];
	}
}