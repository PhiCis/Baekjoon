#include<bits/stdc++.h>
using namespace std;

int t, a, b, c;

int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int ans =0;
		scanf("%d%d%d", &a, &b, &c);
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if((i&j)<c) ans++;
			}
		}
		printf("Case #%d: %d\n", i, ans);
		
	}
}