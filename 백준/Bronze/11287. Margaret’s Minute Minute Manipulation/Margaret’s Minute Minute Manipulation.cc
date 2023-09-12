#include<bits/stdc++.h>
using namespace std;

int t;
int d[7]={0, 10*3600, 1*3600, 10*60, 1*60, 10, 1};
int ans[7];

main()
{
	for(int k=1;k<=2;k++)
	for(int i=3;i>=0;i--)
	{
		for(int j=1;j<=6;j++)
		{
			int a;
			cin>>a;
			t+=d[j]*(a<<i);
		}
	}
	if(t>=86400) t-=86400;
	ans[1]=t/3600/10;
	ans[2]=t/3600%10;
	ans[3]=t%3600/60/10;
	ans[4]=t%3600/60%10;
	ans[5]=t%60/10;
	ans[6]=t%60%10;
	for(int i=3;i>=0;i--)
	{
		for(int j=1;j<=6;j++)
		{
			cout<<((ans[j]>>i)&1);
			if(j<6) cout<<" ";
		}
		if(i!=0) cout<<"\n";
	}
}