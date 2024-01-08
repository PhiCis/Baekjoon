#include<bits/stdc++.h>
using namespace std;

int n, m, k;
char a[1010][20], ans[1010];
int b;
char c;
int ANS;
int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=k;i++)
	{
		cin>>b>>c;
		for(int j=1;j<=n;j++)
		{
			if(a[j][b]==c) ans[j]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(ans[i]==k) ANS++;
	}
	if(ANS>1)
	{
		cout<<"ambiguous\n"<<ANS;
	}
	else
	{
		cout<<"unique\n";
		for(int i=1;i<=n;i++)
		{
			if(ans[i]==k) cout<<i;
		}
	}
}