#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		printf("Case %d: ", i);
		if(a==0)
		{
			printf("0\n");
			continue;
		}
		if(a/b!=0)
		{
			printf("%d ", a/b);
		}
		a%=b;
		if(a!=0)
		{
			printf("%d/%d\n", a, b);
		}
	}
}