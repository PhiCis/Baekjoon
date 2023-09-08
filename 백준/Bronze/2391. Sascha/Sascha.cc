#include<bits/stdc++.h>
using namespace std;

string s, t;
int ans;
string ansi;

int main()
{
	int n, k;
	cin>>n;
	while(n--)
	{
		ans=2e9;
		cin>>s;
		cin>>k;
		while(k--)
		{
			cin>>t;
			int tmp=0;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]!=t[i]) tmp++;
			}
			if(ans>tmp)
			{
				ans=tmp;
				ansi=t;
			}
		}
		cout<<ansi<<"\n";
	}
}