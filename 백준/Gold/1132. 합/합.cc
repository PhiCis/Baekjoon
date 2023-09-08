#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;
int ans[10];
int chk[10];
int ANS;

main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		string a;
		cin>>a;
		chk[a[0]-'A']=1;
		int tmp[10]={0};
		for(int j=0;j<a.size();j++)
		{
			for(int k=0;k<10;k++)
			{
				tmp[k]*=10;
			}
			tmp[a[j]-'A']++;
		}
		for(int j=0;j<10;j++)
		{
			ans[j]+=tmp[j];
		}
	}
	int tmp=1e18;
	for(int i=0;i<10;i++)
	{
		if(chk[i]) continue;
		tmp=min(tmp, ans[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(chk[i]==0&&tmp==ans[i])
		{
			ans[i]=1e18;
			break;
		}
	}
	for(int i=1;i<=9;i++)
	{
		int tmp=1e18;
		for(int j=0;j<10;j++)
		{
			tmp=min(tmp, ans[j]);
		}
		ANS+=tmp*i;
		for(int j=0;j<10;j++)
		{
			if(tmp==ans[j])
			{
				ans[j]=1e18;
				break;
			}
		}
	}
	printf("%lld", ANS);
}