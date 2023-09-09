#include<bits/stdc++.h>
using namespace std;

int n, m, a[110][110], b[110], ans;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>b[i];
	for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
	for(int i=2;i<=m;i++) ans+=a[b[i-1]][b[i]];
	cout<<ans;
}