#include<bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>n;
		vector<int> a(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		cout<<"Case "<<x<<": ";
		for(int i=1;i<=n;i++)
		{
			if(a[i]==0||a[i]==1||a[i]==100)
			{
				cout<<"Fallen\n";
				goto skip;
			}
		}
		cout<<"Standing\n";
		skip:;
	}
}