#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[11][11];
char c;

int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2*m;j++)
		{
			cin>>c;
			if(c!=a[i][j/2])
			{
				cout<<"Not Eyfa";
				return 0;
			}
		}
	}
	cout<<"Eyfa";
}
