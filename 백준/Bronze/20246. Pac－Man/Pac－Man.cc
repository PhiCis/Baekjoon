#include<bits/stdc++.h>
using namespace std;

int x, y;

int main()
{
	cin>>x>>y;
	cout<<x<<" "<<y<<"\n";
	for(int i=x-1;i>=0;i--)
	{
		cout<<i<<" "<<y<<"\n";
	}
	for(int i=y-1;i>=0;i--)
	{
		cout<<0<<" "<<i<<"\n";
	}
	for(int i=0;i<=9;i++)
	{
		for(int j=1;j<=9;j++) cout<<i<<" "<<j<<"\n";
		for(int j=8;j>=0;j--) cout<<i<<" "<<j<<"\n";
		if(i!=9) cout<<i+1<<" "<<0<<"\n";
	}
}