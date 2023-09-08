#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		char c;
		scanf(" %c", &c);
		if(c=='#') return 0;
		string s;
		getline(cin, s);
		int ans = 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==c||s[i]-'A'+'a'==c)
			{
				ans++;
			}
		}
		printf("%c %d\n", c, ans);
	}
}