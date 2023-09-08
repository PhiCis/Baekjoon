#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	string t;
	cin>>t;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			printf(" ");
		}
		else
		{
			
			printf("%c",(s[i]-t[i%t.size()]-1<0)?('a'+s[i]-t[i%t.size()]-1+26):('a'+s[i]-t[i%t.size()]-1));
		}
	}
}