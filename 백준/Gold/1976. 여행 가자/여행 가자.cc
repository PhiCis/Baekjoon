#include<bits/stdc++.h>
int n, m, a, b, c, p[1010], t[1010];
int find(int k)
{
	if(p[k]==k) return k;
	p[k]=find(p[k]);
	return p[k]; 
}
void merge(int i, int j)
{
	i=find(i);
	j=find(j);
	if(i==j) return;
	p[j]=i;
}
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		p[i]=i;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a);
			if(a==1)
			{
				merge(i, j);
			}
		}
	}
	scanf("%d", &t[0]);
	for(int i=1;i<m;i++)
	{
		scanf("%d", &t[i]);
		if(find(t[i])!=find(t[i-1]))
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}