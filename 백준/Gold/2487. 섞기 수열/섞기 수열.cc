#include<bits/stdc++.h>
using namespace std;

int n, a[20020], c[20020], ANS;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]) continue;
		int now = i;
		int cnt = 0;
		while(1)
		{
			cnt++;
			c[now]=1;
			now = a[now];
			if(c[now]) break;
		}
//		printf("%d\n", cnt);
		if(ANS==0) ANS = cnt;
		else ANS = ANS/__gcd(ANS, cnt)*cnt;
	}
	printf("%d", ANS);
}