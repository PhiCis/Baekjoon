#include<bits/stdc++.h>
using namespace std;
int n;

int main()
{
	scanf("%d" ,&n);
	while(n>1)
	{
		if(n&1)
		{
			printf("0");
			return 0;
		}
		n>>=1;
	}
	printf("1");
	return 0;
}