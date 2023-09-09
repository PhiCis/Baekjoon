#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int s, n;
		scanf("%d", &s);
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			int a, b;
			scanf("%d%d", &a, &b);
			s+=a*b;
		}
		printf("%d\n", s);
	}
}