#include<bits/stdc++.h>
using namespace std;

int n;
string t;
int a[1100][1100], s[1100][1100];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>t;
			if(t[0]<='9') a[i][j]=t[0]-'0';
			if(t[0]=='A') a[i][j]=1;
			if(t[0]=='T') a[i][j]=10;
			if(t[0]=='J') a[i][j]=11;
			if(t[0]=='Q') a[i][j]=12;
			if(t[0]=='K') a[i][j]=13;
		}
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n;j++)
		{
			s[i][j]=max(s[i+1][j], s[i][j-1])+a[i][j];
		}
	}
	cout<<s[1][n];
}