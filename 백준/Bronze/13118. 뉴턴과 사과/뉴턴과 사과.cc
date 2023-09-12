#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e;

int main()
{
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if(a==e)
	{
		printf("1");
	}
	else if(b==e)
	{
		printf("2");
	}
	else if(c==e)
	{
		printf("3");
	}
	else if(d==e)
	{
		printf("4");
	}
	else
	{
		printf("0");
	}
}