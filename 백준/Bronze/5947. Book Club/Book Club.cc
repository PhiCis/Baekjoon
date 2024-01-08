#include<bits/stdc++.h>
using namespace std;

int n, m, k, b, c, a[50500][55], ans[50500], ANS;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(0);
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
	for(int i=1;i<=n;i++) if(ans[i]==k) ANS++;
	cout<<ANS;
}