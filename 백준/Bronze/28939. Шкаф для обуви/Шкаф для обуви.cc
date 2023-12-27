#include<bits/stdc++.h>
using namespace std;

int n, k, m1, m2;
int a, m, b;
int ans;

int main()
{
	cin>>n>>k>>m1>>m2;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>m;
		int al=a, ar=a*k;
		for(int j=1;j<=m;j++)
		{
			cin>>b;
			int bl=b*m2, br=b*m1;
			if(ar<bl||br<al) ans++;
		}
	}
	cout<<ans;
}