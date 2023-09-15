#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n>>s;
	cout<<s[0];
	for(int i=1;i<s.size();i++)
	{
		cout<<(s[i-1]+s[i])%2;
	}
}