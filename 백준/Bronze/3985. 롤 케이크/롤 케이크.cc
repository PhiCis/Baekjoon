#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l, n;
	scanf("%d", &l);
	vector<int> v(l+1, -1);
	scanf("%d", &n);
	vector<int> p(n), k(n);
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &p[i], &k[i]);
		for(int j=p[i];j<=k[i];j++)
		{
			if(v[j]!=-1) continue;
			v[j]=i;
		}
		if(k[ans]-p[ans]<k[i]-p[i])
		{
			ans = i;
		}
	}
	printf("%d\n", ans+1);
	vector<int> ans2(n);
	for(int i=1;i<=l;i++)
	{
		if(v[i]!=-1)
		{
			ans2[v[i]]++;
		}
	} 
	int ans3 = 0;
	for(int i=0;i<n;i++)
	{
		if(ans2[ans3]<ans2[i])
		{
			ans3 = i;
		}
	}
	printf("%d", ans3+1);
}