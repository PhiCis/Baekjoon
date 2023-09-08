#include<bits/stdc++.h>
using namespace std;

map<char, int> m;

int main()
{
	m['-']=0;
	m['\\']=1;
	m['(']=2;
	m['@']=3;
	m['?']=4;
	m['>']=5;
	m['&']=6;
	m['%']=7;
	m['/']=-1;
	while(1)
	{
		string s;
		cin>>s;
		if(s=="#") return 0;
		int ans = 0;
		for(int i=0;i<s.size();i++)
		{
			ans*=8;
			ans+=m[s[i]];
		}
		printf("%d\n", ans);
	}
}