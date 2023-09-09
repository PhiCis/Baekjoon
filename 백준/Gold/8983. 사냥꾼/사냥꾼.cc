#include<bits/stdc++.h>
using namespace std;

int n, m, l, a[100010];
int ans;

int main()
{
	scanf("%d%d%d", &m, &n, &l);
	for(int i=0;i<m;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+m);
	for(int i=0;i<n;i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		int s = 0, e = m-1;
		int tmp = 1e9;
		while(s<=e)
		{
			int mid = s+e>>1;
			if(a[mid]<x)
			{
				tmp = min(tmp, x-a[mid]);
				s = mid+1;
			}
			else
			{
				tmp = min(tmp, a[mid]-x);
				e = mid-1;
			}
		}
		if(tmp+y<=l) ans++;
	}
	printf("%d", ans);
}