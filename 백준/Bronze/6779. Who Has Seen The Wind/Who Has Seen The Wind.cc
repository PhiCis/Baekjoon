#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h;int m;
	scanf("%d%d", &h, &m);
	for(int i=1;i<=m;i++)
	{
		if(-6*i*i*i*i + h*i*i*i + 2*i*i + i <= 0)
		{
			printf("The balloon first touches ground at hour: %d", i);
			return 0;
		}
	}
	printf("The balloon does not touch ground in the given time.");

}