#include<bits/stdc++.h>
using namespace std;
int n, t, a, b;

int main()
{
	scanf("%d", &n);
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &a, &b);
		if(n-a+1+b<a-1||n-b+a<b-1)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
}