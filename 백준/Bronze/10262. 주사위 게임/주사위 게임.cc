#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f, g, h;
int main()
{
	scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);
	if(a+b+c+d>e+f+g+h)
	{
		printf("Gunnar");
	}
	else if(a+b+c+d<e+f+g+h)
	{
		printf("Emma");
	}
	else
	{
		printf("Tie");
	}
}