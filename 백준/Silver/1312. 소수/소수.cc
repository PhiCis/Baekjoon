#include<bits/stdc++.h>
using namespace std;

int a, b, n;

int main()
{
	scanf("%d%d%d", &a, &b, &n);
	a%=b;
	for(int i=1;i<=n;i++)
	{
		a*=10;
		if(i==n)
		{
			printf("%d", a/b);
			return 0;
		}
		a%=b;
	}
}