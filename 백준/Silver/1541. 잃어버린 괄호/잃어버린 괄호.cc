#include<stdio.h>
#include<string.h>
char a[1010], c[1010];
int b[1010], len, i, pnt, num, ans;
int main()
{
	scanf("%s", a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='-'||a[i]=='+')
		{
			b[pnt]=num;
			num=0;
			c[pnt++]=a[i];
		}
		else
		{
			num*=10;
			num+=a[i]-'0';
		}
	}
	b[pnt]=num;
	ans=b[0];
	i=0;
	while(c[i]!='-'&&i<pnt)
	{
		ans+=b[++i];
	}
	while(i<pnt)
	{
		ans-=b[++i];
	}
	printf("%d", ans);
	
}