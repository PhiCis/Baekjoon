#include<bits/stdc++.h>
using namespace std;

string s;
int main()
{
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(i>=2 && s[i]==s[i-1]&&s[i]==s[i-2] && s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y') continue;
		cout<<s[i];
	}
}