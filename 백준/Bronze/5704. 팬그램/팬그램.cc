#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		vector<int> c(26, 0);
		getline(cin, s);
		if(s=="*") return 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				c[s[i]-'a']++;
			}
		}
		for(int i=0;i<26;i++)
		{
			if(c[i]==0) goto skip;
		}
		printf("Y\n");
		continue;
		skip:;
		printf("N\n");
	}
}