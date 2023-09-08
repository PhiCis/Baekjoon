#include<bits/stdc++.h>
using namespace std;

int n;
string s[1010];
int v[1010][26];
int ans;

int main()
{
	scanf("%d\n", &n);
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		for(int j=0;j<s[i].size();j++)
		{
			v[i][s[i][j]-'A']++;
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(s[i].size()==s[1].size())
		{
			int tmp=0;
			for(int j=0;j<26;j++)
			{
				tmp+=abs(v[i][j]-v[1][j]);
			}
			if(tmp==0||tmp==2) ans++;
		}
		else
		{
			int tmp=0;
			for(int j=0;j<26;j++)
			{
				tmp+=abs(v[i][j]-v[1][j]);
			}
			if(tmp==1) ans++;
		}
	}
	printf("%d", ans);
}