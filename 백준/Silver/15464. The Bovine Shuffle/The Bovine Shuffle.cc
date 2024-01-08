#include<bits/stdc++.h>
using namespace std;

int n, a[110], b[110], c[110];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++) c[j]=b[a[j]];
		for(int j=1;j<=n;j++) b[j]=c[j];
	}
	for(int i=1;i<=n;i++) cout<<b[i]<<"\n";
}