#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a, b;
		cin>>a>>b;
		for(int i=1;i<=b;i++)
		{
			for(int j=1;j<=a;j++)
			{
				cout<<"X";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}