#include<bits/stdc++.h>
using namespace std;

int n, m, a[100010];
int ans;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++) cin>>a[i];
	for(int i=2;i<=m;i++) if(a[i-1]>a[i]) ans++;
	cout<<ans;
}