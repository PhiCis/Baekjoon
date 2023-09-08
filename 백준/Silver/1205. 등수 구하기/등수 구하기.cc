#include<bits/stdc++.h>
using namespace std;

int n, a, p;
int ans1=1, ans2=1;
int k;

int main()
{
	scanf("%d%d%d", &n, &a, &p);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &k);
		if(k>a) ans1++;
		if(k>=a) ans2++;
	}
	if(ans2>p)
	{
		printf("-1");
	}
	else
	{
		printf("%d", ans1);
	}
}