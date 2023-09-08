#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, m, a[100010], s[100010], l, r;
int ans=INF;
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s[i]=a[i]+s[i-1];
	}
	int l=0;r=1;
	while(r<=n)
	{
		if(s[r]-s[l]<m) r++;
		else
		{
			ans=min(ans, r-l);
			l++;
		}
	}
	if(ans==INF) printf("0");
	else printf("%d", ans);
}