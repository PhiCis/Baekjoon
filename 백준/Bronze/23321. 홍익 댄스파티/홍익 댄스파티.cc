#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s[5];
	for(int i=0;i<5;i++) cin>>s[i];
	vector<string> t(s[0].size());
	for(int j=0;j<s[0].size();j++)
	{
		string m;
		for(int i=0;i<5;i++) m+=s[i][j];
		if(m==".omln") t[j]="owln.";
		else if(m=="owln.") t[j]=".omln";
		else t[j]=m;
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<s[0].size();j++)
		{
			cout<<t[j][i];
		}
		cout<<"\n";
	}
}