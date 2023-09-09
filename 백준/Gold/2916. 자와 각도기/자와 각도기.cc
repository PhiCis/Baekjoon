#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, a;
	scanf("%d%d", &n, &k);
	int ans=360;
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		ans=__gcd(ans, a);		
	}
	for(int i=1;i<=k;i++)
	{
		scanf("%d", &a);
		if(a%ans==0) printf("YES\n");
		else printf("NO\n");
	}
}