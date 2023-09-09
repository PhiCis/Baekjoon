#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a==b&&b==c)
	{
		printf("2");
	}
	else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
}