#include<bits/stdc++.h>
using namespace std;

int n, i;

int main()
{
	scanf("%d", &n);
	i=1;
	while(1)
	{
		if(n%i)
		{
			printf("%d ", i);
			break;
		}
		i++;
	}
	i=n;
	while(1)
	{
		if(n%i)
		{
			printf("%d", i);
			break;
		}
		i--;
	}
}