#include<bits/stdc++.h>
using namespace std;

int n, m, k;
int a[110][110], b[110];

int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>a[i][j];
	for(int j=1;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
		{
			b[i]+=a[i][j];
			if(b[i]>=k)
			{
				cout<<i<<" "<<j<<"\n";
				return 0;
			}
		}
	}
}