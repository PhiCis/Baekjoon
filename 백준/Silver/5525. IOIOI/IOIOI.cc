#include<stdio.h>
int n, s, i, a[1000010], ans, res;
int main()
{
	scanf("%d%d", &n, &s);
	for(i=0;i<s;i++)
	{
		scanf(" %c", &a[i]);
	}
	for(i=0;i<s;i++)
	{
		if(a[i]=='I'&&a[i+1]=='O'&&a[i+2]=='I')
		{
			ans=1;
			i+=2;
			while(a[i+1]=='O'&&a[i+2]=='I')
			{
				ans++;
				i+=2;
			}
			//printf("%d ", ans);
			res+=ans+1-n>0?ans+1-n:0;
		}
	}
	printf("%d", res);
}