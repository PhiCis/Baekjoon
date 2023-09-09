#include<bits/stdc++.h>
using namespace std;

int t, a, b, cnt;
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		cnt = 0;
		scanf("%d%d", &a, &b);
		while(a<b)
		{
			a*=2;
			cnt++;
		}
		printf("%d\n", cnt);
	}
}