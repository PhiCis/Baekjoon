#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int n;
		string s, u;
		cout<<"Data Set "<<i<<":\n";
		cin>>n>>s;
		vector<int> a(26, 0);
		for(int j=0;j<s.size();j++)
		{
			a[s[j]-'A']=1;
		}
		int ans=0;
		while(n--)
		{
			cin>>u;
			for(int j=0;j<u.size();j++)
			{
				if(a[u[j]-'A'])
				{
					ans++;
					break;
				}
			}
		}
		cout<<ans<<"\n\n";
	}
}