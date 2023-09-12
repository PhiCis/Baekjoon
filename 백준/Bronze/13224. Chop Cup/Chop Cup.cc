#include<bits/stdc++.h>
using namespace std;

int a[4]={0, 1, 0, 0};
string s;

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A') swap(a[1], a[2]);
		if(s[i]=='B') swap(a[2], a[3]);
		if(s[i]=='C') swap(a[1], a[3]);
	}
	if(a[1]==1) cout<<1;
	if(a[2]==1) cout<<2;
	if(a[3]==1) cout<<3;
}