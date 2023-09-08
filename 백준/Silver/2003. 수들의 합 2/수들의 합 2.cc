#include<bits/stdc++.h>
using namespace std;

int n, m, a[10010], s[10010], l, r;
int ans;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s[i]=s[i-1]+a[i];
	}
	
	while(1)
	{
		while(s[r]-s[l]<m)
		{
			r++;
			if(r>n) goto skip;
		}
		if(s[r]-s[l]==m)
		{
			ans++;
		}
		l++;
	}
	skip:;
	printf("%d", ans);
}