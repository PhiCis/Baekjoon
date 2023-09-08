#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, m, ans[26];
char a[110][110];

main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char c;
			cin>>c;
			a[i][j]=a[i+n][j]=a[i][j+m]=a[i+n][j+m]=c;	
		}
	}
	for(int i=1;i<=2*n;i++)
	{
		for(int j=1;j<=2*m;j++)
		{
			ans[a[i][j]-'A']+=i*(2*n+1-i)*j*(2*m+1-j);
		}
	}
	for(int i=0;i<26;i++)
	{
		cout<<ans[i]<<"\n";
	}
}