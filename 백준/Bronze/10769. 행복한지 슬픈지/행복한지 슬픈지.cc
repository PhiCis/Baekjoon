#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	int a = 0, b = 0;
	if(s.size()<3)
	{
		printf("none");
		return 0;
	}
	for(int i=0;i<s.size()-3;i++)
	{
		if(s[i]==':'&&s[i+1]=='-'&&s[i+2]==')') a++;
		if(s[i]==':'&&s[i+1]=='-'&&s[i+2]=='(') b++;
	}
	if(a==0&&b==0) printf("none");
	else if(a==b) printf("unsure");
	else if(a>b) printf("happy");
	else if(a<b) printf("sad");
}