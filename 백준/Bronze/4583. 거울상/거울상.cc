#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string s;
		cin>>s;
		if(s=="#") return 0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='b'||s[i]=='d'||s[i]=='p'||s[i]=='q'||s[i]=='i'||s[i]=='o'||s[i]=='v'||s[i]=='w'||s[i]=='x') continue;
			cout<<"INVALID\n";
			goto skip;
		}
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='b') cout<<'d';
			else if(s[i]=='d') cout<<'b';
			else if(s[i]=='p') cout<<'q';
			else if(s[i]=='q') cout<<'p';
			else cout<<s[i];
		}
		cout<<"\n";
		skip:;
	}
}