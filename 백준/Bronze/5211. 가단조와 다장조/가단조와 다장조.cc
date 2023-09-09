#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int a=0, c=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(i==0||s[i-1]=='|')
		{
			if(s[i]=='A'||s[i]=='D'||s[i]=='E') a++;
			if(s[i]=='C'||s[i]=='F'||s[i]=='G') c++;
		}
	}
	if(a>c) cout<<"A-minor";
	else if(a<c) cout<<"C-major";
	else
	{
		a=0, c=0;
		int i=s.size()-1;
		if(s[i]=='A'||s[i]=='D'||s[i]=='E') a++;
		if(s[i]=='C'||s[i]=='F'||s[i]=='G') c++;
		if(a>c) cout<<"A-minor";
		else if(a<c) cout<<"C-major";
	}
}