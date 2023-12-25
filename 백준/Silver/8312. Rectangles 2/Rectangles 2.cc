#include<bits/stdc++.h>
using namespace std;

long long n, m, p, ans;
int main()
{
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(2*(i+j)>=p)
			{
				ans+=(n+1-i)*(m+1-j);
			}
		}
	}
	cout<<ans;
}