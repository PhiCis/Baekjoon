#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, a, b, ans=0, cnt=0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d", &a, &b);
			cnt+=a;
			cnt-=b;
			ans=min(ans, cnt);
		}
		printf("%d\n", -ans);
	}
}