#include<bits/stdc++.h>
using namespace std;

int ans, c[26];
string s;

int main()
{
	while(1)
	{
		getline(cin, s);
		if(s=="#") return 0;
		ans = 0;
		for(int i=0;i<26;i++)
		{
			c[i]=0;
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a'&&s[i]<='z') c[s[i]-'a']++;
			if(s[i]>='A'&&s[i]<='Z') c[s[i]-'A']++;
		}
		for(int i=0;i<26;i++)
		{
			if(c[i]) ans++;
		}
		printf("%d\n", ans);
	}
}