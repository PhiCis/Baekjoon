#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='S')
			{
				cout<<s;
				return 0;
			}
		}
	}
}