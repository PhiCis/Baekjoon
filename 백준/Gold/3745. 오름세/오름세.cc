#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, a[1000010], c[1000010], d[1000010];
vector<int> v;

int main()
{
	while(cin>>n)
	{
	
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		
		d[0] = a[0];
		c[0] = 1;
		int l = 1;
		
		for(int i=0;i<n;i++)
		{
			if(a[i] > d[l-1])
			{
				d[l++] = a[i];
				c[i] = l;
			}
			int tmp = lower_bound(d, d+l, a[i]) - d;
			d[tmp] = a[i];
			c[i] = tmp+1;
		}
		
		printf("%d\n", l);
	}
}