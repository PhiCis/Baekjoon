#include<bits/stdc++.h>
using namespace std;

int T, n, m;
bool chk[1010];
pair<int, int> a[1010];
int ans;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if(a.second!=b.second) return a.second<b.second;
	else return a.first<b.first;
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		ans=0;
		scanf("%d%d", &n, &m);
		for(int i=1;i<=n;i++)
		{
			chk[i]=false;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d%d", &a[i].first, &a[i].second);
		}
		sort(a, a+m, cmp);
		for(int i=0;i<m;i++)
		{
			for(int j=a[i].first;j<=a[i].second;j++)
			{
				if(!chk[j])
				{
					ans++;
					chk[j]=true;
					break;
				}
			}
		}
		printf("%d\n", ans);
	}
}