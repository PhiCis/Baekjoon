#include<bits/stdc++.h>
using namespace std;

int t, sx, sy, ex, ey, n;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d%d%d%d", &n, &sx, &sy, &ex, &ey);
		printf("Case %d: ", i);
		if((ex-sx)*(ex-sx)+(ey-sy)*(ey-sy)==5) printf("YES\n");
		else printf("NO\n");
	}
}