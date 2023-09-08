#include<bits/stdc++.h>
using namespace std;

int r1, r2, c1, c2, ans[100][100];
int m;

int main()
{
	cin>>r1>>c1>>r2>>c2;
	for(int i=r1;i<=r2;i++)
	{
		for(int j=c1;j<=c2;j++)
		{
			int n=max(abs(i), abs(j));
			if(-i==n) ans[i-r1][j-c1]=(2*n-1)*(2*n-1)+(2*n-1)+(n-j+1);
			else if(-j==n) ans[i-r1][j-c1]=(2*n)*(2*n)+1+(n+i);
			else if(i==n) ans[i-r1][j-c1]=(4*n*n+2*n+1)+(n+j);
			else if(j==n) ans[i-r1][j-c1]=(2*n-1)*(2*n-1)+(n-i);
			m=max(m, ans[i-r1][j-c1]);
		}
	}
	m=(int)to_string(m).size();
	for(int i=r1;i<=r2;i++)
	{
		for(int j=c1;j<=c2;j++)
		{
			for(int k=0;k<m-(int)to_string(ans[i-r1][j-c1]).size();k++) cout<<" ";
			cout<<ans[i-r1][j-c1]<<" ";
		}
		cout<<"\n";
	}
}