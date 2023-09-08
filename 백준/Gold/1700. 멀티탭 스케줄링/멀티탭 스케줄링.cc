#include<stdio.h>
int n, k, a[1010][2], c[1010][2], s[1010][2], ans, max, maxi;
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=k;i++)
	{
		scanf("%d", &a[i][0]);
		c[a[i][0]][0]++;
		a[c[a[i][0]][1]][1]=i;
		c[a[i][0]][1]=i;
	}
	for(int i=1;i<=k;i++)
	{
		if(a[i][1]==0)
		{
			a[i][1]=k+1;
		}
	}
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[j][0]==a[i][0])
			{
				s[j][1]=a[i][1];
				goto skip;
			}
		}
		for(int j=1;j<=n;j++)
		{
			if(s[j][0]==0)
			{
				s[j][0]=a[i][0];
				s[j][1]=a[i][1];
				goto skip;
			}
		}
		max=0; maxi=0;
		for(int j=1;j<=n;j++)
		{
			if(max<s[j][1])
			{
				max=s[j][1];
				maxi=j;
			}
		}
		ans++;
		s[maxi][0]=a[i][0];
		s[maxi][1]=a[i][1];
		skip:;
	}
	printf("%d", ans);
}