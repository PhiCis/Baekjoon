#include<bits/stdc++.h>
using namespace std;

map<char, char> m;
int n, k;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n;
	while(n--)
	{
		char a, b;
		cin>>a>>b;
		m[a]=b;
	}
	cin>>k;
	while(k--)
	{
		char a;
		cin>>a;
		if(m[a]) cout<<m[a];
		else cout<<a;
	}
}