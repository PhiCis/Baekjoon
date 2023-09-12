#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
char a[100010];
int w[100010], o[100010], c[100010];
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=1;i--)
	{
		if(a[i]=='W') w[i]=w[i+1]+1;
		else w[i]=w[i+1];
		if(a[i]=='O') o[i]=o[i+1]+w[i];
		else o[i]=o[i+1];
		if(a[i]=='C') c[i]=c[i+1]+o[i];
		else c[i]=c[i+1]; 
	}
//	for(int i=1;i<=n;i++) cout<<w[i]<<" ";
//	cout<<"\n";
//	for(int i=1;i<=n;i++) cout<<o[i]<<" ";
//	cout<<"\n";
//	for(int i=1;i<=n;i++) cout<<c[i]<<" ";
//	cout<<"\n";
	cout<<c[1];
}