#include<bits/stdc++.h>
using namespace std;

string s;
long long a[26];
long long ans;
int flag;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		a[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>1) flag=1;
		ans+=a[i]*(s.size()-a[i]);
	}
	ans/=2;
	ans+=flag;
	cout<<ans;
}