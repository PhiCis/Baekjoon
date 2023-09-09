#include<bits/stdc++.h>
using namespace std;

string s;

int main()
{
	while(1)
	{
		getline(cin, s);
		if(s=="#") return 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==' ') cout<<"%20";
			else if(s[i]=='!') cout<<"%21";
			else if(s[i]=='$') cout<<"%24";
			else if(s[i]=='%') cout<<"%25";
			else if(s[i]=='(') cout<<"%28";
			else if(s[i]==')') cout<<"%29";
			else if(s[i]=='*') cout<<"%2a";
			else cout<<s[i];
		}
		cout<<"\n";
	}
}