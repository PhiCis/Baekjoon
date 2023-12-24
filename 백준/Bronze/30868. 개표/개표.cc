#include<bits/stdc++.h>
using namespace std;

int n, a;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		for(int i=0;i<a/5;i++)
		{
			cout<<"++++ ";
		}
		for(int i=0;i<a%5;i++)
		{
			cout<<"|";
		}
		cout<<"\n";
	}
}