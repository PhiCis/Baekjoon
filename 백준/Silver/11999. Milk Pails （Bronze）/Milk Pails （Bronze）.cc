#include<bits/stdc++.h>
using namespace std;

int a, b, c, ans=1e9;

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	for(int i=0;;i++)
	{
		if(i*a>c)
		{
			printf("%d", c-ans);
			return 0;
		}
		ans=min(ans, (c-a*i)%b);
	}
}