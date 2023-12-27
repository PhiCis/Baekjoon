#include<bits/stdc++.h>
using namespace std;

int n, m, a[1010], r[100], l[100];
long long ANS=1;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>l[i]>>r[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(l[i]<=j&&j<=r[i]) a[j]=1;
			else a[j]=0;
		}
		for(int j=i+1;j<=m;j++)
		{
			for(int k=l[j];k<=r[j];k++)
			{
				a[k]=0;
			}
		}
		int ans=0;
		for(int j=1;j<=n;j++)
		{
			ans+=a[j];
		}
		if(ans) ANS*=2;
	}
	cout<<ANS;
}