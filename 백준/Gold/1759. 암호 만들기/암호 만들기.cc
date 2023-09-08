#include<bits/stdc++.h>
using namespace std;
int l, c;
char a[20];
int chk[20];

void dfs(int i, int x, int y)
{
	if(x+y==l)
	{
		if(x<2||y<1) return;
		for(int i=1;i<=c;i++)
		{
			if(chk[i]) printf("%c", a[i]);
		}
		printf("\n");
		return;
	}
	if(i>c) return;
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		chk[i]=1;
		dfs(i+1, x, y+1);
		chk[i]=0;
		dfs(i+1, x, y);
	}
	else
	{
		chk[i]=1;
		dfs(i+1, x+1, y);
		chk[i]=0;
		dfs(i+1, x, y);
	}
}

int main()
{
	scanf("%d%d", &l, &c);
	for(int i=1;i<=c;i++)
	{
		scanf(" %c", &a[i]);
	}
	sort(a+1, a+c+1);
	dfs(1, 0, 0);
}