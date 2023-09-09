#include<bits/stdc++.h>
using namespace std;

int n, m;
double w, x[1010], y[1010];

int main()
{
	while(1)
	{
		scanf("%d%d%lf", &n, &m, &w);
		if(n==0&&m==0&&w==0.0) return 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lf", &x[i]);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%lf", &y[i]);
		}
		sort(x, x+n);
		sort(y, y+m);
		if(x[0]>w/2||y[0]>w/2)
		{
			printf("NO\n");
			goto skip;
		}
		for(int i=0;i<n-1;i++)
		{
			if(x[i+1]-x[i]>w)
			{
				printf("NO\n");
				goto skip;
			}
		}
		for(int i=0;i<m-1;i++)
		{
			if(y[i+1]-y[i]>w)
			{
				printf("NO\n");
				goto skip;
			}
		}
		if(75.0-x[n-1]>w/2||100.0-y[m-1]>w/2)
		{
			printf("NO\n");
			goto skip;
		}
		printf("YES\n");
		skip:;
	}
}