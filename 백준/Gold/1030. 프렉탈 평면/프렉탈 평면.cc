#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long s, n, k, r1, r2, c1, c2, a[15];
	cin>>s>>n>>k>>r1>>r2>>c1>>c2;
	a[0]=1;
	for(long long i=1;i<=s;i++)
	{
		a[i]=a[i-1]*n;
	}
	for(long long i=r1;i<=r2;i++)
	{
		for(long long j=c1;j<=c2;j++)
		{
			long long x=i, y=j, f1=0, f2=0;
			for(long long l=s-1;l>=0;l--)
			{
				if(x/a[l]%n>=(n-k)/2&&x/a[l]%n<(n-k)/2+k && y/a[l]%n>=(n-k)/2&&y/a[l]%n<(n-k)/2+k)
				{
					cout<<"1";
					goto skip;
				}
				x%=a[l], y%=a[l];
			}
			cout<<"0";
			skip:;
		}
		printf("\n");
	}
}