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
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
			{
				for(int j=i;j<s.size();j++)
				{
					cout<<s[j];
				}
				for(int j=0;j<i;j++)
				{
					cout<<s[j];
				}
				cout<<"ay\n";
				goto skip;
			}
		}
		cout<<s<<"ay\n";
		skip:;
	}
}