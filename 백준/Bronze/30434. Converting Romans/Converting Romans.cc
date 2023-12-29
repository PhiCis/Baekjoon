#include<bits/stdc++.h>
using namespace std;

map<char, int> m={{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

int n;

int main()
{
	cin>>n;
	while(n--)
	{
		int ans=0, tmp=0;
		string s;
		cin>>s;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(m[s[i]]>=tmp)
			{
				tmp=m[s[i]];
				ans+=m[s[i]];
			}
			else
			{
				ans-=m[s[i]];
			}
		}
		cout<<ans<<"\n";
	}
}