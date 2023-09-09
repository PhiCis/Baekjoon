#include<bits/stdc++.h>
using namespace std;

char a[200][200];

int main()
{
	int n, m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
			a[2*n-1-i][j]=a[i][j];
			a[2*n-1-i][2*m-1-j]=a[i][j];
			a[i][2*m-1-j]=a[i][j];
		}
	}
	int c, b;
	cin>>c>>b;
	c--;
	b--;
	if(a[c][b]=='#') a[c][b]='.';
	else a[c][b]='#';
	for(int i=0;i<2*n;i++)
	{
		for(int j=0;j<2*m;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}