#include<bits/stdc++.h>
using namespace std;

int n, x, y;
int a[4][4]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-12,-13,-14,-15,-16};

int main()
{
	cin>>n;
	while(cin>>x>>y)
	{
		a[x][y]=n;
		if(a[1][1]==a[1][2]&&a[1][2]==a[1][3])
		{
			cout<<n;
			return 0;
		}
		if(a[2][1]==a[2][2]&&a[2][2]==a[2][3])
		{
			cout<<n;
			return 0;
		}
		if(a[3][1]==a[3][2]&&a[3][2]==a[3][3])
		{
			cout<<n;
			return 0;
		}
		if(a[1][1]==a[2][1]&&a[2][1]==a[3][1])
		{
			cout<<n;
			return 0;
		}
		if(a[1][2]==a[2][2]&&a[2][2]==a[3][2])
		{
			cout<<n;
			return 0;
		}
		if(a[1][3]==a[2][3]&&a[2][3]==a[3][3])
		{
			cout<<n;
			return 0;
		}
		if(a[1][1]==a[2][2]&&a[2][2]==a[3][3])
		{
			cout<<n;
			return 0;
		}
		if(a[1][3]==a[2][2]&&a[2][2]==a[3][1])
		{
			cout<<n;
			return 0;
		}
		n=3-n;
	}
	cout<<0;
}