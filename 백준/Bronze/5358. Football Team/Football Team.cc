#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(getline(cin, s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='i') cout<<"e";
			else if(s[i]=='e') cout<<"i";
			else if(s[i]=='I') cout<<"E";
			else if(s[i]=='E') cout<<"I";
			else cout<<s[i];
		}
		cout<<"\n";
	}
}