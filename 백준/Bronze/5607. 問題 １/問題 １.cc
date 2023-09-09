#include<bits/stdc++.h>
using namespace std;
int n, a, b, ansa, ansb;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		if(a>b)
		{
			ansa+=a+b;
		}
		else if(a<b)
		{
			ansb+=a+b;
		}
		else
		{
			ansa+=a;
			ansb+=b;
		}
	}
	printf("%d %d", ansa, ansb);
}