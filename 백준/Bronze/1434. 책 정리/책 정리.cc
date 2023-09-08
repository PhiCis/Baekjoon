#include<bits/stdc++.h>
using namespace std;
int n, m, a, ansa;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		ansa+=a;
	}
	for(int j=1;j<=m;j++)
	{
		scanf("%d", &a);
		ansa-=a;
	}
	printf("%d", ansa);
}