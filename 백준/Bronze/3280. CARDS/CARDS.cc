#include<bits/stdc++.h>
using namespace std;

int n, k, a[15][500][3];
int c[1010];

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++) c[i]=1;
	int tmp=1;
	for(int i=0;i<n/3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[0][i][j]=tmp++;
		}
	}
	for(int i=1;i<=k;i++)
	{
		string s;
		cin>>s;
		if(s=="first")
		{
			for(int j=0;j<n/3;j++)
			{
				c[a[i-1][j][1]]=c[a[i-1][j][2]]=0;
			}
		}
		if(s=="second")
		{
			for(int j=0;j<n/3;j++)
			{
				c[a[i-1][j][0]]=c[a[i-1][j][2]]=0;
			}
		}
		if(s=="third")
		{
			for(int j=0;j<n/3;j++)
			{
				c[a[i-1][j][1]]=c[a[i-1][j][0]]=0;
			}
		}
		int tmp=0;
		for(int j=0;j<3;j++)
		{
			for(int l=0;l<n/3;l++)
			{
				a[i][tmp/3][tmp%3]=a[i-1][l][j];
				tmp++;
			}
		}
//		for(int j=0;j<n/3;j++)
//		{
//			for(int l=0;l<3;l++)
//			{
//				cout<<a[i][j][l]<<" ";
//			}
//			cout<<"\n";
//		}
//		cout<<"\n";
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]) cout<<i<<" ";
	}
}