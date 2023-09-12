#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	int i=0;
	while(x|y)
	{
		if(x%3+y%3!=1)
		{
			printf("0");
			return 0;
		}
		x/=3;y/=3;
	}	
	printf("1");
}