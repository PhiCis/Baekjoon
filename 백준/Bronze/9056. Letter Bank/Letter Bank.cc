#include<bits/stdc++.h>
using namespace std;

int n;
string s, t;

int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>t;
		map<char, int> m;
		for(int j=0;j<t.size();j++)
		{
			m[t[j]]=1;
			for(int k=0;k<s.size();k++)
			{
				if(s[k]==t[j]) goto skip;
			}
			cout<<"NO\n";
			goto skip2;
			skip:;
		}
		if(m.size()==s.size()) cout<<"YES\n";
		else cout<<"NO\n";
		skip2:;
	}
}