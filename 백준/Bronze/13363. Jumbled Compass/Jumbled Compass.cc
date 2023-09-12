#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if((b+360-a)%360<=(a+360-b)%360)
	{
		printf("%d", (b+360-a)%360);
	}
	else
	{
		printf("-%d", (a+360-b)%360);
	}
}