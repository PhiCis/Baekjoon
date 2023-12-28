#include<bits/stdc++.h>
using namespace std;

int n;
string s, t;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s>>t;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='x'||s[j]=='X')
			{
				if(t[j]>='a') cout<<(char)(t[j]-'a'+'A');
				else cout<<t[j];
			}
		}
	}
}