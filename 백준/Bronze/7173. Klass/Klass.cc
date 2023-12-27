#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[300][300];
int b[300][300];
int d[4][2]={-1, 0, 0, -1, 1, 0, 0, 1};
double ans;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j]-'0';
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			int cnt=0, tmp=0;
			for(int k=0;k<4;k++)
			{
				if(1<=i+d[k][0]&&i+d[k][0]<=n&&1<=j+d[k][1]&&j+d[k][1]<=m)
				{
					cnt++;
					tmp+=abs(b[i][j]-b[i+d[k][0]][j+d[k][1]]);
				}
			}
			ans+=(double)tmp/cnt;
//			cout<<(double)tmp/cnt<<" ";
		}
//		cout<<"\n";
	}
	printf("%.4lf", ans);
}