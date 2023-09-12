#include<stdio.h>
int n, q, a, x, y, s[100010][5];
int main()
{
	scanf("%d%d", &n, &q);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		s[i][1]=s[i-1][1];
		s[i][2]=s[i-1][2];
		s[i][3]=s[i-1][3];
		s[i][a]++;
	}
	for(int i=1;i<=q;i++)
	{
		scanf("%d%d", &x, &y);
		printf("%d %d %d\n", s[y][1]-s[x-1][1], s[y][2]-s[x-1][2], s[y][3]-s[x-1][3]);
	}
}