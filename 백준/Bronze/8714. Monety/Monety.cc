#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int ans = 0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d", &a);
		ans+=a;
	}
	printf("%d", min(ans, n-ans));
}