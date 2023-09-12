#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s.size()!=8) continue;
		if(s[0]!=s[1]) continue;
		if(s[0]<'1'||s[0]>'9') continue;
		if(s[2]<'1'||s[2]>'9') continue;
		if(s[3]<'1'||s[3]>'9') continue;
		if(s[4]<'A'||s[4]>'Z') continue;
		if(s[5]<'1'||s[5]>'9') continue;
		if(s[6]<'1'||s[6]>'9') continue;
		if(s[7]<'1'||s[7]>'9') continue;
		cout<<s<<"\n";
	}
}