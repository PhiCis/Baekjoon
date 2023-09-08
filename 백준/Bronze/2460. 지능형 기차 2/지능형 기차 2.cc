#include<bits/stdc++.h>
using namespace std;

int tmp, ans, a, b;
int main()
{
	for(int i=1;i<=10;i++)
	{
		scanf("%d%d", &a, &b);
		tmp+=b-a;
		ans = max(ans, tmp);
	}
	printf("%d", ans);
}