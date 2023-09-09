#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		char b;
		cin>>a>>b;
		for(int i=1;i<=a;i++)
		{
			for(int j=1;j<=i;j++)
			{
				cout<<char('A'+(b-'A'+(i-1))%26);
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}