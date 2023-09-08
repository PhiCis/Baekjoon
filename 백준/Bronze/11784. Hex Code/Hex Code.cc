#include<bits/stdc++.h>
using namespace std;

map<char, int> m;
string s;

int main()
{
	for(int i=0;i<=9;i++) m[(char)('0'+i)]=i;
	for(int i=0;i<6;i++) m[(char)('A'+i)]=10+i;
	while(cin>>s)
	{
		for(int i=0;i<s.size();i+=2)
		{
			cout<<(char)(m[s[i]]*16+m[s[i+1]]);
		}
		cout<<"\n";
	}
}