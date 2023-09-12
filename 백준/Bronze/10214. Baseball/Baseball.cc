#include<bits/stdc++.h>
using namespace std;

int T;
int a, b;
int A, B;

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		A=B=0;
		for(int i=1;i<=9;i++)
		{
			scanf("%d%d", &a, &b);
			A+=a, B+=b;
		}
		if(A>B)
		{
			printf("Yonsei\n");
		}
		else if(A<B)
		{
			printf("Korea\n");
		}
		else
		{
			printf("Draw\n");
		}
	}
}