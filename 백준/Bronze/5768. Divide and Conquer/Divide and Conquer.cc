#include<bits/stdc++.h>
using namespace std;

int a[5050];
int ans, ansi;

int main()
{
	for(int i=1;i<=5000;i++)
	{
		int cnt=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0) cnt++;
		}
		a[i]=cnt;
	}
	while(1)
	{
		int n, m;
		ans=0;
		ansi=0;
		cin>>n>>m;
		if(n==0&&m==0) return 0;
		for(int i=n;i<=m;i++)
		{
			if(a[i]>=ans)
			{
				ans=a[i];
				ansi=i;
			}
		}
		cout<<ansi<<" "<<ans<<"\n";
	}
}