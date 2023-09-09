#include<bits/stdc++.h>
using namespace std;
int p[1000010];
int main()
{
	p[2]=1;
	for(int i=3;i<=1000000;i+=2) p[i]=1;
	for(int i=3;i*i<=1000000;i+=2)
		for(int j=i*i;j<=1000000;j+=2*i)
			p[j]=0;
	while(1)
	{
		string s;
		cin>>s;
		int ans=0;
		if(s=="0") return 0;
		for(int i=4;i<s.size();i++)
		{
			int tmp=(s[i]-'0')+(s[i-1]-'0')*10+(s[i-2]-'0')*100+(s[i-3]-'0')*1000+(s[i-4]-'0')*10000;
			if(p[tmp]) ans=max(ans, tmp);
		}
		for(int i=3;i<s.size();i++)
		{
			int tmp=(s[i]-'0')+(s[i-1]-'0')*10+(s[i-2]-'0')*100+(s[i-3]-'0')*1000;
			if(p[tmp]) ans=max(ans, tmp);
		}
		for(int i=2;i<s.size();i++)
		{
			int tmp=(s[i]-'0')+(s[i-1]-'0')*10+(s[i-2]-'0')*100;
			if(p[tmp]) ans=max(ans, tmp);
		}
		for(int i=1;i<s.size();i++)
		{
			int tmp=(s[i]-'0')+(s[i-1]-'0')*10;
			if(p[tmp]) ans=max(ans, tmp);
		}
		for(int i=0;i<s.size();i++)
		{
			int tmp=(s[i]-'0');
			if(p[tmp]) ans=max(ans, tmp);
		}
		printf("%d\n", ans);
	}
}