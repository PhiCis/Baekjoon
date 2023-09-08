#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=1;i<=3;i++)
	{
		int a1, a2, a3, b1, b2, b3;
		int a, b;
		scanf("%d:%d:%d%d:%d:%d", &a1, &a2, &a3, &b1, &b2, &b3);
		a=3600*a1+60*a2+a3;
		b=3600*b1+60*b2+b3;
		if(a>b) b+=86400;
		int ans = 0;
		for(int i=a;i<=b;i++)
		{
			if(((i/3600%24)+(i/60%60)+(i%60))%3==0) ans++;
		}
		printf("%d\n", ans);
	}
}