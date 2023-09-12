#include<bits/stdc++.h>
using namespace std;

int ansa=100, ansb=100;

int n;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a<b)
		{
			ansa-=b;
		}
		if(a>b)
		{
			ansb-=a;
		}
	}
	printf("%d\n%d", ansa, ansb);
}