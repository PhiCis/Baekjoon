#include<bits/stdc++.h>
using namespace std;

int n, a[11][11];
int ans = 2e9;

vector<int> v;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	do{
		int tmp=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[v[i]][v[i+1]]==0) goto skip;
			tmp+=a[v[i]][v[i+1]];
		}
		if(a[v[n-1]][v[0]]==0) goto skip;
		tmp+=a[v[n-1]][v[0]];
		ans = min(ans, tmp);
		skip:;
	}while(next_permutation(v.begin(), v.end()));
	cout<<ans;
}