#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans1 = 0, ans2 = 1;
	scanf("%d", &n);
	while(n--)
	{
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		ans1^=c;
		ans2*=b;
		ans2/=a;
	}
	printf("%d %d", ans1, ans2);
}