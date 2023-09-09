#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int main()
{
	cin>>n>>s;
	for(int i=0;i<s.size();i++)
	{
		cout<<char((s[i]-'A'+26-(3*i+n+3)%26)%26+'A');
	}
}