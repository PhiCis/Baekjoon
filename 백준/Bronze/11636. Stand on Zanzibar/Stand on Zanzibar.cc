#include<bits/stdc++.h>
using namespace std;

int n, k, p;
int main()
{
	scanf("%d", &n);
	while(n--)
	{
		p=-1;
		int ans = 0;
		while(1)
		{
			scanf("%d", &k);
			if(p==-1)
			{
				p=k;
				continue;
			}
			if(k==0) break;
			ans+=max(0, k-2*p);
			p=k;
		}
		printf("%d\n", ans);
	}
}