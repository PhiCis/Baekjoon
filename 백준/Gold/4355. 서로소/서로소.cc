#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		if(n==1)
		{
			printf("0\n");
			continue;
		}
		vector<int> g;
		int ans = n;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				g.push_back(i);
				while(n%i==0)
				{
					n/=i;
				}
			}
		}
		if(n!=1) g.push_back(n);
		for(auto i:g)
		{
			ans/=i;
			ans*=i-1;
		}
		printf("%d\n", ans);
	}
}