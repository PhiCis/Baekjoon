#include<bits/stdc++.h>
using namespace std;

int ANS;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int ans = 0;
		for(int j=1;j<=n;j++)
		{
			int a;
			scanf("%d", &a);
			ans = max(ans, a);
		}
		ANS+=ans;
	}
	printf("%d\n", ANS);
}