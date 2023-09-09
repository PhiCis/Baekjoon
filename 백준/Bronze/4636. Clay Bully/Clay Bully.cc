#include<bits/stdc++.h>
using namespace std;

int n, a[10], b[10], c[10];
string d[10];
int main()
{
	while(1)
	{
		cin>>n;
		if(n==-1) return 0;
		int m=2e9, M=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i]>>c[i]>>d[i];
			m=min(m, a[i]*b[i]*c[i]);
			M=max(M, a[i]*b[i]*c[i]);
		}
		for(int i=1;i<=n;i++)
		{
			if(M==a[i]*b[i]*c[i]) cout<<d[i];
		}
		cout<<" took clay from ";
		for(int i=1;i<=n;i++)
		{
			if(m==a[i]*b[i]*c[i]) cout<<d[i]<<".\n";
		}
	}
}