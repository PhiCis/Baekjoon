#include<bits/stdc++.h>
using namespace std;

int n;
pair<int, int> v[1000010];

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &v[i].second, &v[i].first);
	}
	sort(v, v+n);
	int s = 0, e = 1000000000, ans=0;
	while(s<=e)
	{
		int m=s+e>>1;
		int tmp=m;
//		printf("%d %d : %d\n", s, e, m);
		for(int i=0;i<n;i++)
		{
			tmp+=v[i].second;
			if(tmp>v[i].first)
			{
				e=m-1;
				goto skip;
			}
		}
		ans=max(ans, m);
		s=m+1;
		skip:;
	}
	printf("%d", ans);
}