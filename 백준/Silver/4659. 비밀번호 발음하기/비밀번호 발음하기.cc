#include<bits/stdc++.h>
using namespace std;

bool f(char a)
{
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') return true;
	else return false;
}

bool g(char a)
{
	return !f(a);
}

int main()
{
	string s;
	while(1)
	{
		cin>>s;
		if(s=="end") return 0;
		for(int i=0;i<s.size();i++)
		{
			if(f(s[i])) goto skip1;
		}
		cout<<"<"<<s<<"> is not acceptable.\n";
		continue;
		skip1:;
		for(int i=2;i<s.size();i++)
		{
			if(f(s[i]) & f(s[i-1]) & f(s[i-2]))
			{
				cout<<"<"<<s<<"> is not acceptable.\n";
				goto skip2;
			}
			if(g(s[i]) & g(s[i-1]) & g(s[i-2]))
			{
				cout<<"<"<<s<<"> is not acceptable.\n";
				goto skip2;
			}
		}
		for(int i=1;i<s.size();i++)
		{
			if(s[i]==s[i-1] && s[i]!='e' && s[i]!='o')
			{
				cout<<"<"<<s<<"> is not acceptable.\n";
				goto skip2;
			}
		}
		cout<<"<"<<s<<"> is acceptable.\n";
		skip2:;
	}
}