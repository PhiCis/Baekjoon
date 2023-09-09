#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
	{
		cout<<"*";
		for(int j=1;j<=b;j++) cout<<" ";
		cout<<"*";
		for(int j=1;j<=b;j++) cout<<" ";
		cout<<"*\n";
	}
	cout<<"*";
	for(int j=1;j<=b;j++) cout<<"*";
	cout<<"*";
	for(int j=1;j<=b;j++) cout<<"*";
	cout<<"*\n";
	for(int i=1;i<=c;i++)
	{
		cout<<" ";
		for(int j=1;j<=b;j++) cout<<" ";
		cout<<"*\n";
	}
}