#include<bits/stdc++.h>
using namespace std;

int f(int i)
{
	int ans=0;
	while(i)
	{
		ans*=10;
		ans+=i%10;
		i/=10;
	}
	return ans;
}

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		printf("%d\n", f(f(a)+f(b)));
	}
}