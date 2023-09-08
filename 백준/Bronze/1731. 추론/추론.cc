#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, c;
	scanf("%d", &n);
	scanf("%d%d%d", &a, &b, &c);
	if(a+c==2*b)
	{
		printf("%d", a+n*(b-a));
	}
	else
	{
		long long ans = a;
		for(int i=0;i<n;i++)
		{
			ans = ans*b/a;
		}
		printf("%d", (int)ans);
	}
}