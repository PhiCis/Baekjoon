#include<bits/stdc++.h>
using namespace std;

int n;
string s;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n;
	while(n--)
	{
		cin>>s>>s;
		for(int i=1;i<s.size()-1;i++)
		{
			if(s[i]=='\\' && s[i+1]=='n')
			{
				cout<<"\n";
				i++;
			}
			else
			{
				cout<<s[i];
			}
		}
	}
}