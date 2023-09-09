#include<bits/stdc++.h>
using namespace std;

int n, a[1010][1010];
char c[1010];
int m, k;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>c[i];
	cin>>m>>k;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=k;j++) cin>>a[i][j];
		for(int j=1;j<=k;j++) if(c[a[i][j]]=='P') goto skip;
		cout<<"W";
		return 0;
		skip:;
	}
	cout<<"P";
}