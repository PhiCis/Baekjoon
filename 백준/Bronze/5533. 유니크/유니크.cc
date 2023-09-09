#include<bits/stdc++.h>
using namespace std;

int n;
int a[3][110];
int main()
{
	scanf("%d", &n);
	vector<vector<int> > v;
	for(int i=0;i<n;i++)
	{
		int x, y, z;
		scanf("%d%d%d", &x, &y, &z);
		a[0][x]++;a[1][y]++;a[2][z]++;
		v.push_back({x, y, z});
	}
	for(int i=0;i<n;i++)
	{
		int ans = 0;
		if(a[0][v[i][0]]==1) ans+=v[i][0];
		if(a[1][v[i][1]]==1) ans+=v[i][1];
		if(a[2][v[i][2]]==1) ans+=v[i][2];
		printf("%d\n", ans);
	}
}