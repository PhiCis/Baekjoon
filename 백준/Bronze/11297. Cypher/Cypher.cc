#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c;
		string s;
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0) return 0;
		a=26-((a+b+c)%25+1);
		getline(cin, s);
		getline(cin, s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]<'a'||s[i]>'z') cout<<s[i];
			else
			{
				cout<<(char)((s[i]-'a'+a)%26+'a');
			}
		}
		cout<<"\n";
	}
}