#include<bits/stdc++.h>
using namespace std;
int a[1010], b[1010], c[1010], d[1010], n, m, ans=2e9, ansi;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i];
	for(int i=1;i<=m;i++) cin>>d[i];
	for(int i=1;i<=n;i++)
	{
		int tmp=a[i]*100;
		for(int j=1;j<=m;j++)
		{
			if(d[j]<b[i]) tmp+=0;
			else
			{
				tmp+=((d[j]-1)/b[i]+1)*c[i];
			}
		}
		if(tmp<ans)
		{
			ans=tmp;
			ansi=i;
		}
	}
	cout<<ansi;
}