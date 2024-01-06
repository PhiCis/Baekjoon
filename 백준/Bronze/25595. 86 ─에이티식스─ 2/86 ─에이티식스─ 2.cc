#include<bits/stdc++.h>
using namespace std;

int a[110][110];
int n;

int main()
{
	cin>>n;
	int x, y;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==2) x=i, y=j;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i][j]==1)
			{
				if((i+j-x-y)%2==0)
				{
					cout<<"Kiriya";
					return 0;
				}
			}
		}
	}
	cout<<"Lena";
}