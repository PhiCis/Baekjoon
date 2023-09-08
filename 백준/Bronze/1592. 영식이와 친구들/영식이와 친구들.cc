#include<bits/stdc++.h>
using namespace std;

int n, m, l, a[1010];
int ans;

int main()
{
	scanf("%d%d%d", &n, &m, &l);
	a[0]=1;
	int now = 0;
	while(1)
	{
		if(a[now]==m) break;
		ans++;
		if(a[now]&1)
		{
			a[(now+l)%n]++;
			now = (now+l)%n;
		}
		else
		{
			a[(now-l+n)%n]++;
			now = (now-l+n)%n;
		}
	}
	printf("%d", ans);
}