#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		vector<int> cnt(m);
		vector<int> ans(m);
		int ANS = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int a;
				scanf("%d", &a);
				if(a==1)
				{
					cnt[j]++;
					ans[j]+=(n-i);
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			ANS+=ans[i]-(cnt[i]+1)*(cnt[i])/2;
		}
		printf("%d\n", ANS);
	}
}