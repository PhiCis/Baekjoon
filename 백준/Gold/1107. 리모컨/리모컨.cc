#include<bits/stdc++.h>
using namespace std;

int ans;
int n, k, a[11], c[11];

int main()
{
	scanf("%d", &n);
	scanf("%d", &k);
	for(int i=1;i<=k;i++)
	{
		int a;
		scanf("%d", &a);
		c[a]=1;
	}
	ans=abs(n-100);
	for(int i=0;i<1000000;i++)
	{
		int tmp=i;
		int cnt=0;
		while(tmp)
		{
			if(c[tmp%10]) goto skip;
			tmp/=10;
			cnt++;
		}
		if(i==0)
		{
			if(c[0]) goto skip;
			cnt=1;
		}
		ans=min(ans, cnt+abs(n-i));
		skip:;
	}
	printf("%d", ans);
}