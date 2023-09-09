#include<bits/stdc++.h>
using namespace std;

int t, a, b;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		map<int, int> m;
		int ans = 0;
		for(int i=1;i<=a;i++)
		{
			int c;
			scanf("%d", &c);
			if(m[c]==1) ans += 1;
			else m[c] = 1;
		}
		printf("%d\n", ans);
	}
}