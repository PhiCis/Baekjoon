#include<bits/stdc++.h>
using namespace std;

int n, m, a, b[1100];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) b[i]=i;
	for(int i=1;i<=m;i++)
	{
		cin>>a;
		swap(b[a], b[a+1]);
	}
	for(int i=1;i<=n;i++) cout<<b[i]<<"\n";
}