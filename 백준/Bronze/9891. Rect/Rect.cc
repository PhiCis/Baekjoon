#include<bits/stdc++.h>
using namespace std;

int n;
int x[10010], y[10010];
int ans=0;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		x[i]=c-a, y[i]=d-b;
		if(x[i]>y[i]) swap(x[i], y[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(x[i]>x[j]&&y[i]<y[j]) ans++;
			else if(x[i]<x[j]&&y[i]>y[j]) ans++;
		}
	}
	cout<<ans;
}