#include<bits/stdc++.h>
using namespace std;

int t;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		int s = 0, m = 1e9, a;
		for(int i=1;i<=7;i++)
		{
			scanf("%d", &a);
			if(a&1) continue;
			m = min(m, a);
			s+=a;
		}
		printf("%d %d\n", s, m);
	}
}