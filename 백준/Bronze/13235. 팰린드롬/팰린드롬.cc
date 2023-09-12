#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[s.size()-1-i])
		{
			printf("false");
			return 0;
		}
	}
	printf("true");
	return 0;
}