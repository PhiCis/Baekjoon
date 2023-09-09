#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d, p, m, n;
	scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &p, &m, &n);
	printf("%d\n", (((p-1)%(a+b)+1)<=a?1:0)+(((p-1)%(c+d)+1)<=c?1:0));
	printf("%d\n", (((m-1)%(a+b)+1)<=a?1:0)+(((m-1)%(c+d)+1)<=c?1:0));
	printf("%d\n", (((n-1)%(a+b)+1)<=a?1:0)+(((n-1)%(c+d)+1)<=c?1:0));
}