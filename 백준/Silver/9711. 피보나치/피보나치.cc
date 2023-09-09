#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int p, q;
		scanf("%d%d", &p, &q);
		vector<long long> f(p+1);
		f[0]=0;
		f[1]=1%q;
		for(int i=2;i<=p;i++)
		{
			f[i]=(f[i-1]+f[i-2])%q;
		}
		printf("Case #%d: %d\n", i, f[p]);
	}
}