#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int a=0, b=0;
		for(int i=0;i<s.size();i++)
		{
			if(i==0) a=s[i]-'0', b=1;
			else
			{
				if(s[i]==s[i-1]) b++;
				else
				{
					cout<<b<<a;
					a=s[i]-'0', b=1;
				}
			}
		}
		cout<<b<<a<<"\n";
	}
}