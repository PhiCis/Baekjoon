#include<bits/stdc++.h>
using namespace std;
int n, t, a, c[110], ans;
int main()
{
	cin>>n>>t;
	while(t--)
	{
		cin>>a;
		c[a]=1;
	}
	for(int i=0;i<n;i++)
	{
		if(!c[i])
		{
			ans++;
			cout<<i<<"\n";
		}
	}
	cout<<"Mario got "<<n-ans<<" of the dangerous obstacles.";
}