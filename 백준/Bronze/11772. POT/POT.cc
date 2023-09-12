#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d", &a);
		int b=a%10;
		a/=10;
		int tmp=1;
		for(int j=1;j<=b;j++)
		{
			tmp*=a;
		}
		ans+=tmp;
	}
	printf("%d", ans);
}