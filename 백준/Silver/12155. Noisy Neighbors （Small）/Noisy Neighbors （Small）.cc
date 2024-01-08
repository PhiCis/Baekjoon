#include<bits/stdc++.h>
using namespace std;

int t, n, m, k, a[20][20];
int ans;

void f(int i, int j, int l, int tmp)
{
	if(l==k)
	{
		ans=min(ans, tmp);
		return;
	}
	if(i>=n) return;
	a[i][j]=0;
	if(j==m-1) f(i+1, 0, l, tmp);
	else f(i, j+1, l, tmp);
	a[i][j]=1;
	if(i>0&&a[i-1][j]) tmp++;
	if(j>0&&a[i][j-1]) tmp++;
	if(j==m-1) f(i+1, 0, l+1, tmp);
	else f(i, j+1, l+1, tmp);
}

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		ans=2e9;
		for(int i=0;i<20;i++) for(int j=0;j<20;j++) a[i][j]=0;
		cin>>n>>m>>k;
		cout<<"Case #"<<z<<": ";
		f(0, 0, 0, 0);
		cout<<ans<<"\n";
	}
}