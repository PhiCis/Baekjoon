#include<bits/stdc++.h>
using namespace std;

int ans[26];

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s, t;
		cin>>s>>t;
		int a[26]={0,}, b[26]={0,};
		for(int i=0;i<s.size();i++) a[s[i]-'a']++;
		for(int i=0;i<t.size();i++) b[t[i]-'a']++;
		for(int i=0;i<26;i++) ans[i]+=max(a[i], b[i]);
	}
	for(int i=0;i<26;i++) cout<<ans[i]<<"\n";
}