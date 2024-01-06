#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		map<string, int> m1, m2;
		int n;
		cin>>n;
		string s;
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			m1[s]++;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>s;
			m2[s]++;
		}
		if(m1==m2) cout<<"NOT ";
		cout<<"CHEATER\n";
	}
}