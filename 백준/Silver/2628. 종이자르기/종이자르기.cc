#include<bits/stdc++.h>
using namespace std;

int n, m, k, ga, gb;
vector<int> a, b;

int main()
{
	scanf("%d%d", &m, &n);
	a.push_back(0);
	a.push_back(n);
	b.push_back(0);
	b.push_back(m);
	scanf("%d", &k);
	for(int i=1;i<=k;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		if(u==0) a.push_back(v);
		else b.push_back(v);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int sza = a.size();
	int szb = b.size();
	for(int i=0;i<sza-1;i++)
	{
		ga = max(ga, a[i+1]-a[i]);
	}
	for(int i=0;i<szb-1;i++)
	{
		gb = max(gb, b[i+1]-b[i]);
	}
	printf("%d", ga*gb);
}