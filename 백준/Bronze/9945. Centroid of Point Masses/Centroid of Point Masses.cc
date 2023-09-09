#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, cnt=0;
	while(1)
	{
		long long A=0, B=0, C=0, a, b, c;
		cnt++;
		scanf("%d", &n);
		if(n<0) return 0;
		for(int i=1;i<=n;i++)
		{
			scanf("%lld%lld%lld", &a, &b, &c);
			A+=a*c, B+=b*c, C+=c;
		}
		printf("Case %d: ", cnt);
		printf("%.2lf %.2lf\n", (double)A/(double)C, (double)B/(double)C);
	}
}