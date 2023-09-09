#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a*1000>=7000*b)
	{
		printf("%d", 7000*b);
	}
	else if(a*1000>=3500*b)
	{
		printf("%d", 3500*b);
	}
	else if(a*1000>=1750*b)
	{
		printf("%d", 1750*b);
	}
	else
	{
		printf("0");
	}
}