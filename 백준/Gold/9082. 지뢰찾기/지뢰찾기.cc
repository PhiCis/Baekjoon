#include<bits/stdc++.h>
using namespace std;

int a[110];
char b[110], c[110];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++) scanf("%1d", &a[i]);
		for(int i=1;i<=n;i++) cin>>b[i];
		if(n==1)
		{
			if(a[1]==1) cout<<1<<"\n";
			if(a[1]==0) cout<<0<<"\n";
			continue;
		}
		if(a[1]!=1||(b[1]=='*'||b[2]=='*'))
		{
			if(a[1]==2) b[1]=b[2]='*';
			for(int i=2;i<n;i++)
			{
				if(b[i+1]=='*') continue;
				if((b[i-1]=='*')+(b[i]=='*')!=a[i]) b[i+1]='*';
			}
			assert((b[n-1]=='*')+(b[n]=='*')==a[n]);
			int ans=0;
			for(int i=1;i<=n;i++) if(b[i]=='*') ans++;
			cout<<ans<<"\n";
			continue;
		}
		int ans=0, cnt=0;
		for(int i=1;i<=n;i++) c[i]=b[i];
		b[1]='*';
		for(int i=2;i<n;i++)
		{
			if(b[i+1]=='*')
			{
				if((b[i-1]=='*')+(b[i]=='*')+(b[i+1]=='*')==a[i]) continue;
				else goto skip;
			}
			else
			{
				if((b[i-1]=='*')+(b[i]=='*')==a[i]) continue;
				else if((b[i-1]=='*')+(b[i]=='*')+1==a[i])
				{
					b[i+1]='*';
					continue;
				}
				else goto skip;
			}
		}
		if((b[n-1]=='*')+(b[n]=='*')!=a[n]) goto skip;
		cnt=0;
		for(int i=1;i<=n;i++) if(b[i]=='*') cnt++;
		ans=max(ans, cnt);
		skip:;
		for(int i=1;i<=n;i++) b[i]=c[i];
		b[2]='*';
		for(int i=2;i<n;i++)
		{
			if(b[i+1]=='*')
			{
				if((b[i-1]=='*')+(b[i]=='*')+(b[i+1]=='*')==a[i]) continue;
				else goto skip2;
			}
			else
			{
				if((b[i-1]=='*')+(b[i]=='*')==a[i]) continue;
				else if((b[i-1]=='*')+(b[i]=='*')+1==a[i])
				{
					b[i+1]='*';
					continue;
				}
				else goto skip2;
			}
		}
		if((b[n-1]=='*')+(b[n]=='*')!=a[n]) goto skip2;
		cnt=0;
		for(int i=1;i<=n;i++) if(b[i]=='*') cnt++;
		ans=max(ans, cnt);
		skip2:;
		cout<<ans<<"\n";
	}
}