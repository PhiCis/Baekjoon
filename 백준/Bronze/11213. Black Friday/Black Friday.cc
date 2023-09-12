#include<bits/stdc++.h>
using namespace std;

int n;
int a[101];
int c[10];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		c[a[i]]++;
	}
	for(int i=6;i>=1;i--)
	{
		if(c[i]!=1) continue;
		for(int j=1;j<=n;j++)
		{
			if(a[j]==i)
			{
				printf("%d", j);
				return 0;
			}
		}
	}
	printf("none");
	return 0;
}