#include<bits/stdc++.h>
using namespace std;

int n, a[110], cnt;

int main()
{
	while(1)
	{
		cin>>n;
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		if(n&1) printf("Case %d: %.1lf", ++cnt, 1.0*a[n+1>>1]);
		else printf("Case %d: %.1lf", ++cnt, 0.5*a[n>>1]+0.5*a[n+2>>1]);
		cout<<"\n";
	}
}