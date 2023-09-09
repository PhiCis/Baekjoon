#include<bits/stdc++.h>
using namespace std;

int t, n, m;
vector<int> a, b;
int ans;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		ans = 0;
		scanf("%d%d", &n, &m);
		a.resize(n), b.resize(m);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a.begin(), a.end());
		for(int i=0;i<m;i++)
		{
			scanf("%d", &b[i]);
			ans+= a.end()-upper_bound(a.begin(), a.end(), b[i]);
		}
		printf("%d\n", ans);
	}
}