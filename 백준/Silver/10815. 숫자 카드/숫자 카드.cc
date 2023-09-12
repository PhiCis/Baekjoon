#include<bits/stdc++.h>
using namespace std;

int n, m, a[500050];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		int x;
		scanf("%d", &x);
		int s = 1, e = n;
		while(s<=e)
		{
			int mid = s+e>>1;
			if(a[mid]==x)
			{
				printf("1 ");
				goto skip;
			}
			else if(a[mid]>x)
			{
				e=mid-1;
			}
			else
			{
				s=mid+1;
			}
		}
		printf("0 ");
		skip:;
	}
}