#include<stdio.h>
char a[550][550];
int n, ans1, ans2;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		int j=1;
		while(j<=n)
		{
			int cnt=0;
			while(a[i][j]=='.'&&a[i][j+1]=='.')
			{
				j++;
				cnt++;				
			}
			if(cnt) ans1++;
			j++;
		}
	}
	printf("%d ", ans1);
	for(int j=1;j<=n;j++)
	{
		int i=1;
		while(i<=n)
		{
			int cnt=0;
			while(a[i][j]=='.'&&a[i+1][j]=='.')
			{
				i++;
				cnt++;				
			}
			if(cnt) ans2++;
			i++;
		}
	}
	printf("%d", ans2);
}