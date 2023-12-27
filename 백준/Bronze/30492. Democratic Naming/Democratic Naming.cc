#include<bits/stdc++.h>
using namespace std;

int n, m;
char a[1010][1010];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		int m[26]={0,}, tmp=0;
		for(int j=1;j<=n;j++)
		{
			m[a[j][i]-'a']++;
		}
		for(int j=0;j<26;j++)
		{
			tmp=max(tmp, m[j]);
		}
		for(int j=0;j<26;j++)
		{
			if(tmp==m[j])
			{
				cout<<(char)(j+'a');
				goto skip;
			}
		}
		skip:;
	}
}