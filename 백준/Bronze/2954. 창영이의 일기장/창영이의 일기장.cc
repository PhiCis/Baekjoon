#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		{
			printf("%c", s[i]);
			i+=2;
		}
		else
		{
			printf("%c", s[i]);
		}
	}
}