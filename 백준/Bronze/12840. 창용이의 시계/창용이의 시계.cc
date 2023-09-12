#include<bits/stdc++.h>
using namespace std;
int h, m, s, q;

int main()
{
	scanf("%d%d%d", &h, &m, &s);
	int ans = h*3600+m*60+s;
	scanf("%d", &q);
	while(q--)
	{
		int a;
		scanf("%d", &a);
		if(a<=2)
		{
			int b;
			scanf("%d", &b);
			if(a==1)
			{
				ans+=b;
				ans%=86400;
			}
			else
			{
				ans+=86400000-b;
				ans%=86400;
			}
		}
		else
		{
			printf("%d %d %d\n", ans/3600, ans/60%60, ans%60);
		}
	}
}
