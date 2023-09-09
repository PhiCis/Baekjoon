#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m, l, ans=0;
		scanf("%d%d%d", &n, &m, &l);
		if(l!=1) n-=(m+1-l);
		while(n>0)
		{
			n-=m;
			ans++;
		}
		printf("%d\n", ans);
	}
}