#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	string s[10], t[10];
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int j=0;j<m;j++) cin>>t[j];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<s[i]<<" as "<<t[j]<<"\n";
		}
	}
}