#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, x, y, n;
int A[1010][1010];

int main()
{
	cin>>x>>y>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c>>d;
		for(int j=a;j<=c;j++) for(int k=b;k<=d;k++) A[j][k]=1;
	}
	int ans=0;
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			if(A[i][j]) ans++;
		}
	}
	cout<<ans;
}