#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;

main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1||j==n) cout<<"|";
			else if(i==1||i==n) cout<<"-";
			else if(i==j||i+j==n+1) cout<<"*";
			else cout<<" ";
		}
		cout<<"\n";
	}
}