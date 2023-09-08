#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int c[30]={0};
	int flag=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		c[s[i]-'A']++;
	}
	for(int i=0;i<26;i++)
	{
		if(c[i]&1) flag++;
	}
	if(flag>=2)
	{
		printf("I\'m Sorry Hansoo");
		return 0;
	}
	else
	{
		for(int i=0;i<26;i++)
		{
			for(int j=0;j<c[i]/2;j++)
			{
				printf("%c", 'A'+i);
			}
		}
		for(int i=0;i<26;i++)
		{
			if(c[i]&1) printf("%c", 'A'+i);
		}
		for(int i=25;i>=0;i--)
		{
			for(int j=0;j<c[i]/2;j++)
			{
				printf("%c", 'A'+i);
			}
		}
	}
}