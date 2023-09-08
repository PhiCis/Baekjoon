#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
string s;
int a[20];
int ans=0, ansi=-1;
main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>s>>s;
		for(int j=0;j<m;j++) if(s[j]=='Y') a[i]+=(1ll<<j);
	}
	for(int i=0;i<(1ll<<n);i++)
	{
		int tmp=0, cnt=0, ccnt=0;
		for(int j=0;j<n;j++) if((i>>j)&1ll) tmp|=a[j], ccnt++;
		while(tmp)
		{
			if(tmp&1ll) cnt++;
			tmp>>=1ll;
		}
		if(ans<cnt)
		{
			ans=cnt;
			ansi=ccnt;
		}
		else if(ans==cnt&&ansi>ccnt) ansi=ccnt;
	}
	cout<<ansi;
}