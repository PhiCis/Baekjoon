#include<bits/stdc++.h>
using namespace std;

int ans, ansi, n, a[1010][10];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int tmp=0;
		for(int j=1;j<=5;j++)
		{
			cin>>a[i][j];
		}
		for(int j=1;j<=5;j++)
		{
			for(int k=j+1;k<=5;k++)
			{
				for(int l=k+1;l<=5;l++)
				{
					tmp=max(tmp, (a[i][j]+a[i][k]+a[i][l])%10);
				}
			}
		}
		if(tmp>=ans)
		{
			ans=tmp;
			ansi=i;
		}
	}
	cout<<ansi;
}