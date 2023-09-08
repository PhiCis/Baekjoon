#include<bits/stdc++.h>
using namespace std;

int a, b, A, B;

int main()
{
	scanf("%d%d", &a, &b);
	while(1)
	{
		if(a==b)
		{
			printf("%d %d", A, B);
			return 0;
		}
		if(a<b)
		{
			B++;
			b-=a;
		}
		else
		{
			A++;
			a-=b;
		}
	}
}