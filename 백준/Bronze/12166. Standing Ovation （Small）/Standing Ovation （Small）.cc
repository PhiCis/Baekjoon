#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int n;
		scanf("%d", &n);
		int s=0, ans=0;
		for(int i=0;i<=n;i++)
		{
			ans+=max(0, i-s);
			s=max(s, i);
			int a;
			scanf("%1d", &a);
			s+=a;
		}
		printf("Case #%d: %d\n", i, ans);
	}
}