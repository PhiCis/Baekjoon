#include<bits/stdc++.h>
using namespace std;

string s, t;
int n, m;
int ans=1;
int main()
{
	cin>>n>>s>>m>>t;
	int pnts=0, pntt=0;
	while(ans<=20000)
	{
		if(s[pnts]==t[pntt])
		{
			pnts++;
			pntt++;
			if(pnts>=n) pnts-=n;
		}
		else
		{
			pnts++;
			if(pnts>=n) pnts-=n;
		}
		if(pntt>=m)
		{
			cout<<ans;
			return 0;
		}
		ans++;
	}
	cout<<-1;
}