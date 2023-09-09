#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	while(1)
	{
		getline(cin, s);
		if(s=="ENDOFINPUT") return 0;
		getline(cin, s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				cout<<(char)('A'+(s[i]-'A'+21)%26);
			}
			else cout<<s[i];
		}
		cout<<"\n";
		getline(cin, s);
	}
}