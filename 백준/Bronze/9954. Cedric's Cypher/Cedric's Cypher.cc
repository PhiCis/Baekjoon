#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		getline(cin, s);
		if(s[0]=='#') return 0;
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				cout<<(char)((s[i]-'a'+26-(s[s.size()-1]-'A'))%26+'a');
			}
			else if(s[i]>='A'&&s[i]<='Z')
			{
				cout<<(char)((s[i]-'A'+26-(s[s.size()-1]-'A'))%26+'A');
			}
			else cout<<s[i];
		}
		cout<<"\n";
	}
}