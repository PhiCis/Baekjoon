#include<bits/stdc++.h>
using namespace std;

int n;
char s;
string t;
int ans;

int main()
{
	cin>>n>>s;
	for(int i=0;i<4*n;i++)
	{
		cin>>t;
		if(t[0]=='A') ans+=11;
		else if(t[0]=='K') ans+=4;
		else if(t[0]=='Q') ans+=3;
		else if(t[0]=='J') if(t[1]==s) ans+=20; else ans+=2;
		else if(t[0]=='T') ans+=10;
		else if(t[0]=='9'&&t[1]==s) ans+=14;
	}
	cout<<ans;
}