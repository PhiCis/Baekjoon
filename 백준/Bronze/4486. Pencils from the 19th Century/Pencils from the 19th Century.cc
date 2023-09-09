#include<bits/stdc++.h>
using namespace std;

int n, cnt;
int main()
{
	while(cin>>n)
	{
		cnt++;
		if(n==0) return 0;
		cout<<"Case "<<cnt<<":\n"<<n<<" pencils for "<<n<<" cents\n";
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;i+j<n;j++)
			{
				int k=n-i-j;
				if(i*16+j*2+k==n*4)
				{
					ans++;
					cout<<i<<" at four cents each\n"<<j<<" at two for a penny\n"<<k<<" at four for a penny\n\n";
				}
			}
		}
		if(ans==0)
		{
			cout<<"No solution found.\n\n";
		}
	}
}