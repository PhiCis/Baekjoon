#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		vector<int> v;
		while(1)
		{
			int a;
			scanf("%d", &a);
			if(a==0) break;
			if(a==-1) return 0;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		int ans = 0;
		for(int i=0;i<v.size();i++)
		{
			int now = lower_bound(v.begin(), v.end(), v[i]*2)-v.begin();
			if(now<v.size()&&v[now]==v[i]*2) ans++;
		}
		printf("%d\n", ans);
	}
}