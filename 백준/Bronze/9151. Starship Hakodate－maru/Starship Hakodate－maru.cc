#include<bits/stdc++.h>
using namespace std;

int n;
int a[100], b[110];

int main()
{
	for(int i=1;i<=55;i++) a[i]=i*i*i;
	for(int i=1;i<=100;i++) b[i]=i*(i+1)*(i+2)/6;
	while(1)
	{
		int n;
		cin>>n;
		if(n==0) return 0;
		int ans=0;
		for(int i=0;i<=55;i++)
		{
			for(int j=0;j<=100;j++)
			{
				if(a[i]+b[j]<=n) ans=max(ans, a[i]+b[j]);
			}
		}
		cout<<ans<<"\n";
	}
}