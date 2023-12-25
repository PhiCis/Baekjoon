#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int main()
{
	cin>>a>>b>>c;
	for(int i=1;i<=150;i++)
	{
		for(int j=1;j<=150;j++)
		{
			if(b*i+c*j==a)
			{
				cout<<1;
				return 0;
			}
		}
	}
	cout<<0;
	return 0;
}