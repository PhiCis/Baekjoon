#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	for(int i=1;i<=c;i++)
	{
		printf("%d ", a*c+i*b);
	}
}