#include<bits/stdc++.h>
using namespace std;

string s;
string a="PER";
int ans;

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=a[i%3]) ans++;
	}
	cout<<ans;
}