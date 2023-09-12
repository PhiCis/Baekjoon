#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	int ans=0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	for(int i=1;i<=100;i++)
	{
		if(i>a&&i<=b)
		{
			ans++;
		}
		else if(i>c&&i<=d)
		{
			ans++;
		}
	}
	printf("%d", ans);
}