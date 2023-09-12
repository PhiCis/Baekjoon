#include<bits/stdc++.h>
using namespace std;


int main()
{
	int ans = 0;
	int tmp = 0;
	char c;
	while(scanf(" %c", &c)==1)
	{
		if(c==',')
		{
			ans+=tmp;
			tmp = 0;
		}
		else
		{
			tmp*=10;
			tmp+=c-'0';
		}
	}
	ans+=tmp;
	printf("%d", ans);
}