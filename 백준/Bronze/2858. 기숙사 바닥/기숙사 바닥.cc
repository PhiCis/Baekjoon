#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i=3;i<=5000;i++)
	{
		int j=(a+4)/2-i;
		if(i*j==a+b)
		{
			printf("%d %d\n", max(i, j), min(i, j));
			return 0;
		}
	}
}