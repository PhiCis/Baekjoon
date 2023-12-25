#include<bits/stdc++.h>
using namespace std;

int a[10][20];
char c;
int b;
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c>>b;
		a[c-'A'][b-1]=1;
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<20;j++)
		{
			cout<<(a[i][j]?'o':'.');
		}
		cout<<"\n";
	}
}