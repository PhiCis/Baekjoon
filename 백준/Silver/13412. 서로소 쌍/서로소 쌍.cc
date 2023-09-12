#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int ans=0;
		int n;
		scanf("%d", &n);
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0 && __gcd(i, n/i)==1) ans++;
		}
		printf("%d\n", ans);
	}
}
