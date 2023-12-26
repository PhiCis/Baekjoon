#include<bits/stdc++.h>
using namespace std;

string s[12]={
"1A", "1B", "1C",
"2A", "2B", "2C",
"3A", "3B", "3C",
"4A", "4B", "4C"};
string t[3]={"5A", "5B", "5C"};
map<string, int> m;
int n;
int main()
{
	cin>>n;
	while(n--)
	{
		string u;
		cin>>u;
		m[u]++;
	}
	for(int i=0;i<12;i++)
	{
		if(m[s[i]]<1)
		{
			cout<<"NIE";
			return 0;
		}
	}
	for(int i=0;i<3;i++)
	{
		if(m[t[i]]<2)
		{
			cout<<"NIE";
			return 0;
		}
	}
	cout<<"TAK";
	return 0;
}