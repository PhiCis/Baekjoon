#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int sz = s.size();
	for(int i=0;i<sz;i++)
	{
		if(s[i]<='Z')
		{
			printf("%c", s[i]-'A'+'a');
		}
		else
		{
			printf("%c", s[i]-'a'+'A');
		}
	}
}