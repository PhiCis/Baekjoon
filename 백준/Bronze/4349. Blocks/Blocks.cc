#include<bits/stdc++.h>
using namespace std;

int n, k;
int main()
{
	cin>>n;
	while(n--)
	{
		int ans=2e9;
		cin>>k;
		for(int i=1;i<=k;i++)
		{
			if(k%i==0)
			{
				for(int j=1;j<=i;j++)
				{
					if(k/i%j==0)
					{
						int l=k/i/j;
						ans=min(ans, 2*(i*j+i*l+j*l));
					}
				}
			}
		}
		cout<<ans<<"\n";
	}
}