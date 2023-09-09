#include<bits/stdc++.h>
using namespace std;

int cnt, a, b;

int main()
{
	while(1)
	{
		cnt++;
		scanf("%d%d", &a, &b);
		if(a==0) return 0;
		if(cnt!=1) printf("\n\n");
		printf("Hole #%d\n", cnt);
		if(b==1)
		{
			printf("Hole-in-one.");
		}
		else if(a-3==b)
		{
			printf("Double eagle.");
		}
		else if(a-2==b)
		{
			printf("Eagle.");
		}
		else if(a-1==b)
		{
			printf("Birdie.");
		}
		else if(a==b)
		{
			printf("Par.");
		}
		else if(a+1==b)
		{
			printf("Bogey.");
		}
		else printf("Double Bogey.");
	}
}