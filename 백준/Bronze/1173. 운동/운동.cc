#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N, m, M, T, R;
	scanf("%d%d%d%d%d", &N, &m, &M, &T, &R);
	int ans = 0, tmp = m;
	if(m+T>M)
	{
		printf("-1");
		return 0;
	}
	while(N)
	{
		ans++;
		if(tmp+T<=M)
		{
			N--;
			tmp+=T;
		}
		else
		{
			tmp = max(tmp-R, m);
		}
//		printf("%d\n", tmp);
	}
	printf("%d", ans);
}