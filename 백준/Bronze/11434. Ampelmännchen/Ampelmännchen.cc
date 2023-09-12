#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c, w1, w2, w3, w4;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int ans=0;
		scanf("%d%d%d", &a, &b, &c);
		for(int i=1;i<=a;i++)
		{
			scanf("%d%d%d%d", &w1, &w2, &w3, &w4);
			ans+=max(w1*b+w3*c, w2*b+w4*c);
		}
		printf("Data Set %d:\n%d\n\n", i, ans);
	}
}