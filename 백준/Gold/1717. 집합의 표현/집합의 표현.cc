#include<bits/stdc++.h>
int n, m, a, b, c, p[1000010];
int find(int k)
{
	if(p[k]==k) return k;
	p[k]=find(p[k]);
	return p[k]; 
}
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=0;i<=n;i++)
	{
		p[i]=i;
	}
	while(m--)
	{
		scanf("%d%d%d", &a, &b, &c);
		if(a==0)
		{
			b=find(b);
			c=find(c);
			if(b==c) continue;
			p[c]=b;
		}
		if(a==1)
		{
			printf("%s\n", find(b)==find(c)?"YES":"NO");
		}
	}
}