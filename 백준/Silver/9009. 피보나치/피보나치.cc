#include<bits/stdc++.h>
using namespace std;
long long f[50];

int main()
{
	f[0]=0;
	f[1]=1;
	for(int i=2;i<=48;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	int n, k;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &k);
		vector<int> ans;
		for(int i=48;i>0;i--)
		{
			if(k>=f[i])
			{
				ans.push_back(f[i]);
				k-=f[i];
			}
		}
		reverse(ans.begin(), ans.end());
		for(auto i:ans)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
}