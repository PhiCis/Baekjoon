#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	while(1)
	{
		getline(cin, s);
		if(s=="*") return 0;
		char c;
		if(s[0]<='Z') c = s[0];
		else c = s[0]-'a'+'A';
		for(int i=1;i<s.size();i++)
		{
			if(s[i-1]==' ' && s[i]!=' ')
			{
				if(s[i]==c || s[i]-'a'+'A'==c)
				{
					continue;
				}
				else
				{
					cout<<"N\n";
					goto skip;
				}
			}	
		}
		cout<<"Y\n";
		skip:;
	}
}