#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int M=0, m=1e9;
		for(int i=1;i<=n;i++)
		{
			int a;
			scanf("%d", &a);
			M = max(M, a);
			m = min(m, a);
		}
		printf("%d\n", 2*(M-m));
	}
}