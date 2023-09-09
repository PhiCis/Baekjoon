#include<bits/stdc++.h>
using namespace std;

string a, b;
int n;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>a>>b;
		cout<<"Case "<<i<<": ";
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i]) ans++;
		}
		cout<<ans<<"\n";
	}
}