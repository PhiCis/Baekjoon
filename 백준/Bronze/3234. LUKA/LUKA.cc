#include<bits/stdc++.h>
using namespace std;

int x, y, n;

int xx, yy;
string s;
bool flag;

int main()
{
	cin>>x>>y>>n>>s;
	if(abs(x-xx)<=1&&abs(y-yy)<=1)
	{
		flag=true;
		cout<<0<<"\n";
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]=='I') xx++;
		if(s[i]=='S') yy++;
		if(s[i]=='Z') xx--;
		if(s[i]=='J') yy--;
		if(abs(x-xx)<=1&&abs(y-yy)<=1)
		{
			flag=true;
			cout<<i+1<<"\n";
		}
	}
	if(!flag) cout<<-1;	
}