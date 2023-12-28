#include<bits/stdc++.h>
using namespace std;

int n;
char c;
map<char, int> m;
int ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c;
		m[c]=1;
	}
	if(m['R']&m['O']&m['Y']&m['G']&m['B']&m['I']&m['V']) ans++;
	if(m['r']&m['o']&m['y']&m['g']&m['b']&m['i']&m['v']) ans+=2;
	if(ans==3)
	{
		cout<<"YeS";
	}
	if(ans==2)
	{
		cout<<"yes";
	}
	if(ans==1)
	{
		cout<<"YES";
	}
	if(ans==0)
	{
		cout<<"NO!";
	}
}