#include<bits/stdc++.h>
using namespace std;
vector<int> dp;
int n, a[1000010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		int p=lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
		if(p==(int)dp.size()) dp.push_back(a[i]);
		else dp[p]=a[i];
	}
	printf("%d",(int)dp.size());
	return 0;
}