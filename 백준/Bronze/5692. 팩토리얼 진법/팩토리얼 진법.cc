#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n, tmp = 1, cnt = 1, ans = 0;
		scanf("%d", &n);
		if(n==0) return 0;
		while(n)
		{
			ans+=(n%10)*tmp;
			cnt++;
			tmp*=cnt;
			n/=10;
		}
		printf("%d\n", ans);
	}
}