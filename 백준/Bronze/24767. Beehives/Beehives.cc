#include<bits/stdc++.h>
using namespace std;
double d;
int n;
double a[110], b[110];
int main()
{
	while(cin>>d>>n)
	{
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]>>b[i];
		}
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				if((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])<=d*d)
				{
					ans++;
					break;
				}
			}
		}
		cout<<ans<<" sour, "<<n-ans<<" sweet\n";
	}
}