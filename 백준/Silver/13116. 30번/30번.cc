#include<bits/stdc++.h>
using namespace std;

int n, a, b;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		while(1)
		{
			if(a>b) swap(a, b);
			b>>=1;
			if(a==b)
			{
				printf("%d\n", a*10);
				break;
			}
		}
	}
}