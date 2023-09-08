#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	s+="....";
	for(int i=0;i<s.size();i++)
	{
//		printf("%d", i);
		if(s[i]=='.') continue;
		if(s[i+1]=='.')
		{
			printf("-1");
			return 0;
		}
		if(s[i+2]=='.')
		{
			s[i]=s[i+1]='B';
			i++;
			continue;
		}
		if(s[i+3]=='.')
		{
			printf("-1");
			return 0;
		}
		s[i]=s[i+1]=s[i+2]=s[i+3]='A';
		i+=3;
	}
	for(int i=0;i<s.size()-4;i++)
	{
		printf("%c", s[i]);
	}
}