#include<bits/stdc++.h>
using namespace std;

int n, m;
string s;
string t;

int main()
{
	cin>>n;
	while(n--)
	{
		cin>>s;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			cin>>t;
			map<char, int> M;
			for(int i=0;i<s.size();i++)
			{
				M[s[i]]++;
			}
			for(int i=0;i<t.size();i++)
			{
				M[t[i]]--;
				if(M[t[i]]<0)
				{
					cout<<"NO\n";
					goto skip;
				}
			}
			cout<<"YES\n";
			skip:;
		}
	}
	
}