#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int i=0;i<3;i++)
	{
		int n;
		scanf("%d", &n);
		__int128_t ans = 0;
		int cnt = 0;
		for(int j=0;j<n;j++)
		{
			long long tmp;
			scanf("%lld", &tmp);
			ans += (__int128_t)tmp;
		}
		if(ans>0) printf("+\n");
		if(ans<0) printf("-\n");
		if(ans==0) printf("0\n");
	}
}