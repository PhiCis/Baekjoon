#include<bits/stdc++.h>
using namespace std;

int a[1010101], b[1010101];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, A=0, B=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			A=max(A, a[i]);
		}
		for(int i=1;i<=m;i++)
		{
			cin>>b[i];
			B=max(B, b[i]);
		}
		if(A>=B) cout<<"S\n";
		else cout<<"B\n";
	}
}