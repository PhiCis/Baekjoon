#include<bits/stdc++.h>
using namespace std;

int n, m, a[100], b[100], ansa, ansb;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char c;
			scanf(" %c", &c);
			if(c=='X') a[i]=b[j]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0) ansa++;
	}
	for(int j=1;j<=m;j++)
	{
		if(b[j]==0) ansb++;
	}
	printf("%d", max(ansa, ansb));
}