#include<bits/stdc++.h>
using namespace std;

int a[26];
string s;
int main()
{
	getline(cin, s);
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			a[s[i]-'a']++;
		}
	}
	sort(a, a+26);
	cout<<a[25];
}