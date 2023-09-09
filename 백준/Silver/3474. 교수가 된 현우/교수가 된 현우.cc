#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, tmp=5, ans=0;
		scanf("%d", &n);
		while(tmp<=n)
		{
			ans+=n/tmp;
			tmp*=5;
		}
		printf("%d\n", ans);
	}
}