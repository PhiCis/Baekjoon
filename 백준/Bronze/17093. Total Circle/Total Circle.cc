#include<bits/stdc++.h>
using namespace std;

long long n, m, px[1010], py[1010], qx[1010], qy[1010];
long long ANS;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>px[i]>>py[i];
	for(int i=1;i<=m;i++) cin>>qx[i]>>qy[i];
	for(int i=1;i<=m;i++)
	{
		long long ans=0;
		for(int j=1;j<=n;j++)
		{
			ans=max(ans, (px[j]-qx[i])*(px[j]-qx[i])+(py[j]-qy[i])*(py[j]-qy[i]));
		}
		ANS=max(ANS, ans);
	}
	cout<<ANS;
}