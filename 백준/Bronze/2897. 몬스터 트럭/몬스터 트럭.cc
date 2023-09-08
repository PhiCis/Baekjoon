#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[100][100];
int ans[5];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}	
	for(int i=2;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			map<char, int> M;
			M[a[i-1][j-1]]++;
			M[a[i-1][j]]++;
			M[a[i][j-1]]++;
			M[a[i][j]]++;
			if(M['#']) continue;
			ans[M['X']]++;
		}
	}
	for(int i=0;i<=4;i++) cout<<ans[i]<<"\n";
}