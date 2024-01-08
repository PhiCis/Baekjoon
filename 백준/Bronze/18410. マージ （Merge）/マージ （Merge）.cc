#include<bits/stdc++.h>
using namespace std;

int n, m, a[1000], b[1000];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	int pnta=1, pntb=1;
	while(pnta<=n&&pntb<=m)
	{
		if(a[pnta]>b[pntb]) cout<<b[pntb++]<<"\n";
		else cout<<a[pnta++]<<"\n";
	}
	while(pnta<=n)
	{
		cout<<a[pnta++]<<"\n";
	}
	while(pntb<=m)
	{
		cout<<b[pntb++]<<"\n";
	}
}