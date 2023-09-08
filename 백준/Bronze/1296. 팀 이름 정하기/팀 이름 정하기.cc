#include<bits/stdc++.h>
using namespace std;

int m;
string s;
string t;
string ans1;
int ans=-1;

int main()
{
	cin>>s;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>t;
		map<char, int> M;
		for(int i=0;i<s.size();i++)
		{
			M[s[i]]++;
		}
		for(int i=0;i<t.size();i++)
		{
			M[t[i]]++;
		}
		int tmp=((M['L']+M['O'])*(M['L']+M['V'])*(M['L']+M['E'])*(M['V']+M['O'])*(M['E']+M['O'])*(M['V']+M['E']))%100;
		if(tmp>ans || (tmp==ans&&ans1>t))
		{
			ans=tmp;
			ans1=t;
		}
	}
	cout<<ans1;
}
