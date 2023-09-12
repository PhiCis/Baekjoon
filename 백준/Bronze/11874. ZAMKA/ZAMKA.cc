#include<bits/stdc++.h>
using namespace std;

int f(int x)
{
	int ans=0;
	while(x)
	{
		ans+=x%10;
		x/=10;
	}
	return ans;
}

int main()
{
	int l, r, x, a=100000, b=0;
	scanf("%d%d%d", &l, &r, &x);
	for(int i=l;i<=r;i++)
	{
		if(f(i)==x)
		{
			a=min(a, i);
			b=max(b, i);
		}
	}
	printf("%d\n%d", a, b);
}