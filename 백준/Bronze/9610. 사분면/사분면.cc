#include<bits/stdc++.h>
using namespace std;

int n, x, y, ans[5];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &x, &y);
		if(x==0||y==0) ans[0]++;
		if(x>0&&y>0) ans[1]++;
		if(x<0&&y>0) ans[2]++;
		if(x<0&&y<0) ans[3]++;
		if(x>0&&y<0) ans[4]++;
	}
	for(int i=1;i<=4;i++)
	{
		printf("Q%d: %d\n", i, ans[i]);
	}
	printf("AXIS: %d", ans[0]);
}