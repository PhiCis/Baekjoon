#include<bits/stdc++.h>
using namespace std;

string s;
int a[26];
int m;

int main()
{
	while(cin>>s)
	{
		for(int i=0;i<s.size();i++)
		{
			a[s[i]-'a']++;
		}
	}
	for(int j=0;j<26;j++)
	{
		m=max(m, a[j]);
	}
	for(int j=0;j<26;j++)
	{
		if(a[j]==m)
		{
			printf("%c", j+'a');
		}
	}
}