#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[100], b[100];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n/2;i++) a[i]=i;
	for(int i=1;i<=n/2;i++) b[n/2+1-i]=i+n/2;
	for(int i=1;i<m;i++)
	{
		int tmp=b[2];
		for(int i=3;i<=n/2;i++) b[i-1]=b[i];
		b[n/2]=a[n/2];
		for(int i=n/2-1;i>=1;i--) a[i+1]=a[i];
		a[1]=tmp;
	}
	for(int i=1;i<=n/2;i++) cout<<a[i]<<"-"<<b[i]<<"\n";
}