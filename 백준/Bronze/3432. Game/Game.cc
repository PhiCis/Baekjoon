#include<bits/stdc++.h>
using namespace std;

int t;
char a[20][20];

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		int A=0, B=0;
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=5;j++) cin>>a[i+10][j+10];
		}
		for(int i=11;i<=15;i++)
		{
			for(int j=11;j<=15;j++)
			{
				if(a[i][j]=='A'&&a[i+1][j]=='A'&&a[i+2][j]=='A') A=1;
				if(a[i][j]=='A'&&a[i][j+1]=='A'&&a[i][j+2]=='A') A=1;
				if(a[i][j]=='A'&&a[i+1][j+1]=='A'&&a[i+2][j+2]=='A') A=1;
				if(a[i][j]=='A'&&a[i+1][j-1]=='A'&&a[i+2][j-2]=='A') A=1;
				if(a[i][j]=='B'&&a[i+1][j]=='B'&&a[i+2][j]=='B') B=1;
				if(a[i][j]=='B'&&a[i][j+1]=='B'&&a[i][j+2]=='B') B=1;
				if(a[i][j]=='B'&&a[i+1][j+1]=='B'&&a[i+2][j+2]=='B') B=1;
				if(a[i][j]=='B'&&a[i+1][j-1]=='B'&&a[i+2][j-2]=='B') B=1;
			}
		}
		if(A&&B) cout<<"draw\n";
		else if(A) cout<<"A wins\n";
		else if(B) cout<<"B wins\n";
		else cout<<"draw\n";
	}
}