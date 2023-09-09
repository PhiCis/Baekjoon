#include<bits/stdc++.h>
using namespace std;
string s;

int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		cout<<s[i];
		if(i != s.size()-1 && (s.size()-1-i) % 3 == 0)
		{
			cout<<",";
		}
	}
}