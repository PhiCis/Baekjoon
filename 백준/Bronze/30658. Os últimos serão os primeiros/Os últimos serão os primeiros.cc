#include<bits/stdc++.h>
using namespace std;

int n, a[110];

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
		for(int i=n;i>=0;i--)
		{
			cout<<a[i]<<"\n";
		}
	}
}