#include<bits/stdc++.h>
using namespace std;

int a, b, c;

int main()
{
	cin>>a>>b>>c;
	if(a+b-1>c) cout<<"NO";
	else
	{
		cout<<"YES\n";
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=b;j++)
			{
				cout<<i+j-1<<" ";
			}
			cout<<"\n";
		}
	}
}