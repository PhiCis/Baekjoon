#include<bits/stdc++.h>
using namespace std;

int ansa, ansb;
string s;

int main()
{
	cin>>s;
	int sz = s.size();
	for(int i=0;i<sz-2;i++)
	{
		if(s[i]=='J'&&s[i+1]=='O'&&s[i+2]=='I') ansa++;
		if(s[i]=='I'&&s[i+1]=='O'&&s[i+2]=='I') ansb++;
	}
	printf("%d\n%d", ansa, ansb);
}