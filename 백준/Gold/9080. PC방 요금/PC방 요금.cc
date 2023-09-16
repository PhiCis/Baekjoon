#include<bits/stdc++.h>
using namespace std;

int a[10000];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int h, m, d;
		scanf("%d:%d%d", &h, &m, &d);
		int st=h*60+m+1440, en=st+d;
		for(int i=0;i<10000;i++) a[i]=0;
		int ANS=2e9;
		for(int i=0;i<(1<<4);i++)
		{
			int ans=0;
			for(int j=0;j<4;j++)
			{
				if((i>>j)&1)
				{
					ans+=5000;
					for(int k=1440*j+1320;k<1440*j+1440+480;k++) a[k]=1;
				}
				else
				{
					for(int k=1440*j+1320;k<1440*j+1440+480;k++) a[k]=0;
				}
			}
			int cnt=0;
			for(int j=st;j<en;j++)
			{
				if(a[j]==0) cnt++;
				else
				{
					ans+=1000*((cnt+59)/60);
					cnt=0;
				}
			}
			ans+=1000*((cnt+59)/60);
			ANS=min(ANS, ans);
		}
		cout<<ANS<<"\n";
	}
}