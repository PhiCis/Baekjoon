#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

int main()
{
	while(1)
	{
		scanf("%d", &n);
		if(!n) return 0;
		a.resize(n);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		int cnt=0;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]==0) cnt++;
		}
		a.insert(a.end()-cnt-2, cnt, 0);
//		for(int i=0;i<n;i++)
//		{
//			printf("%d ", a[i]);
//		}
		int ans=0;
		int tmp=1;
		for(int i=0;i<n;i++)
		{
			ans+=tmp*a[i];
			if(i&1) tmp*=10;
		}
		printf("%d\n", ans);
	}
}