#include<bits/stdc++.h>
using namespace std;

int t, a, b, c;

int main()
{
	scanf("%d" ,&t);
	for(int j=1;j<=t;j++)
	{
		printf("Case #%d: ", j);
		scanf("%d%d%d", &a, &b, &c);
		if(b!=100&&c==100)
		{
			printf("Broken\n");
			continue;
		}
		if(b!=0&&c==0)
		{
			printf("Broken\n");
			continue;
		}
		for(int i=1;i<=a;i++)
		{
			if(b*i%100==0)
			{
				printf("Possible\n");
				goto skip;
			}
		}
		printf("Broken\n");
		skip:;
	}
}