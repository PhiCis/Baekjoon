#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for(int j=0;j<26;j++)
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A'&&s[i]<'Z') s[i]=(char)(s[i]+1);
			else if(s[i]=='Z') s[i]='A';
		}
		int flag = 0;
		for(int i=8;i<s.size();i++)
		{
			if(s[i-8]=='C'&&s[i-7]=='H'&&s[i-6]=='I'&&s[i-5]=='P'&&s[i-4]=='M'&&s[i-3]=='U'&&s[i-2]=='N'&&s[i-1]=='K'&&s[i]=='S')
			{
				flag++;
				break;
			}
		}
		for(int i=3;i<s.size();i++)
		{
			if(s[i-3]=='L'&&s[i-2]=='I'&&s[i-1]=='V'&&s[i]=='E')
			{
				flag++;
				break;
			}
		}
		if(flag==2)
		{
			cout<<s;
			return 0;
		}
	}
}