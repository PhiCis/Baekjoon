#include<stdio.h>
int n, i, l, r, m, v[1000010], pnt, ans;
char s[1000010];
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf(" %c", &s[i]);
		if(s[i]=='I') v[++pnt]=i;
	}
	l=1; r=pnt;
	while(l<=r)
	{
		m=(l+r)/2;
		int st=0, nd=0, rd=0;
		for(i=1;i<=n;i++)
		{
			if(s[i]=='J'||(s[i]=='I'&&i<v[m])) st++;
			else if(s[i]=='O'&&st)
			{
				st--; nd++;
			}
			else if(s[i]=='I'&&nd&&i>=v[m])
			{
				nd--; rd++;
			}
		}
		if(rd==pnt-m+1)
		{
			r=m-1; ans=rd;
		}
		else
		{
			l=m+1;
		}
	}
	printf("%d", ans);
}