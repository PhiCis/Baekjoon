#include<bits/stdc++.h>
using namespace std;

int t;
string s;
int a, S;

int main()
{
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		cin>>s;a=0;S=s.size();
		for(int i=0;i<S;i++) a+=s[i];
		if((a-48*S)%9) cout<<"NO\n";
		else cout<<"YES\n";
	}
}