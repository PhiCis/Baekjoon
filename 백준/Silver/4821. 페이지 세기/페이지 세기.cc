#include<bits/stdc++.h>
using namespace std;

int chk[1010];

int main()
{
	while(1)
	{
		int n;
		string s;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			chk[i]=0;
		}
		if(n==0) return 0;
		cin>>s;
		int tmp1=0, tmp2=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='-'&&s[i]!=',')
			{
				tmp1*=10;
				tmp1+=s[i]-'0';
			}
			if(s[i]=='-')
			{
				tmp2=tmp1;
				tmp1=0;
			}
			if(s[i]==',')
			{
				if(tmp2==0)
				{
					chk[tmp1]=1;
				}
				else
				{
					for(int j=tmp2;j<=tmp1;j++)
					{
						chk[j]=1;
					}
				}
				tmp1=tmp2=0;
			}
		}
		if(tmp2==0)
				{
					chk[tmp1]=1;
				}
				else
				{
					for(int j=tmp2;j<=tmp1;j++)
					{
						chk[j]=1;
					}
				}
				tmp1=tmp2=0;
				
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			if(chk[i]) ans++;
		}
		printf("%d\n", ans);
	}
}