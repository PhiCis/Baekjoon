#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	map<string, bool> m;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		string a = "";
		for(int j=i;j<s.size();j++)
		{
			a+=s[j];
			m[a]=true;
		}
	}
	printf("%d", m.size());
}