#include<bits/stdc++.h>
using namespace std;

string s;
int main()
{
	cin>>s;
	int sz = s.size();
	for(int i=0;i<sz;i++)
	{
		s[i]-=3;
		if(s[i]<'A') s[i]+=26;
	}
	cout<<s;
}