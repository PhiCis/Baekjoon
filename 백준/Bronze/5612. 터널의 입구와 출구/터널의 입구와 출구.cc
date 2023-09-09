#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a, b, ans = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	ans = max(ans, m);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a, &b);
		m+=a-b;
		if(m<0)
		{
			printf("0");
			return 0;
		}
		ans = max(ans, m);
	}
	printf("%d", ans);
}