#include<bits/stdc++.h>
using namespace std;

int n, m, a[20];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
		(a[i]*=100)/=n;
		if(0<=a[i] && a[i]<=4) cout<<1<<" ";
		if(4<a[i] && a[i]<=11) cout<<2<<" ";
		if(11<a[i] && a[i]<=23) cout<<3<<" ";
		if(23<a[i] && a[i]<=40) cout<<4<<" ";
		if(40<a[i] && a[i]<=60) cout<<5<<" ";
		if(60<a[i] && a[i]<=77) cout<<6<<" ";
		if(77<a[i] && a[i]<=89) cout<<7<<" ";
		if(89<a[i] && a[i]<=96) cout<<8<<" ";
		if(96<a[i] && a[i]<=100) cout<<9<<" ";
	}
}