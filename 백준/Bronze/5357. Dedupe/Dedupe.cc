#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(i==0||s[i]!=s[i-1]) cout<<s[i];
		}
		cout<<"\n";
	}
}