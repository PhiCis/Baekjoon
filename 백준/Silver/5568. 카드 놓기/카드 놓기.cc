#include<bits/stdc++.h>
using namespace std;

int n, k;
string a[100];
map<string, int> m;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	if(k==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				m[a[i]+a[j]]=1;
			}
		}
	}
	if(k==3)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				for(int k=1;k<=n;k++)
				{
					if(i==k||j==k) continue;
					m[a[i]+a[j]+a[k]]=1;
				}
			}
		}
	}
	if(k==4)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				for(int k=1;k<=n;k++)
				{
					if(i==k||j==k) continue;
					for(int l=1;l<=n;l++)
					{
						if(i==l||j==l||k==l) continue;
						m[a[i]+a[j]+a[k]+a[l]]=1;
					}
				}
			}
		}
	}
	printf("%d", m.size());
}