#include<bits/stdc++.h>
using namespace std;

int n;
int ans;
int main()
{
	cin>>n;
	ans+=(2*n+1)*(2*n+1);
	for(int i=-n;i<=n;i++)
	{
		if(i==0) continue;
		for(int j=-n;j<=n;j++)
		{
			if(-n<=1-i-j && 1-i-j<=n) ans++;
		}
	}
	cout<<ans;
}