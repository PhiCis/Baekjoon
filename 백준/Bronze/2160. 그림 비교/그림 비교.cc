#include<bits/stdc++.h>
using namespace std;

int n, ans=1000000;
char a[101010][40];
pair<int, int> ansi;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=35;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int cnt=0;
			for(int k=1;k<=35;k++)
			{
				if(a[i][k]!=a[j][k]) cnt++;
			}
			if(ans>cnt)
			{
				ans=cnt;
				ansi={i, j};
			}
		}
	}
	cout<<ansi.first<<" "<<ansi.second;
}