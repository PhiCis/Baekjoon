#include<bits/stdc++.h>
using namespace std;

char ans[5]={'D', 'C', 'B', 'A', 'E'};

int main()
{
	for(int i=1;i<=3;i++)
	{
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		printf("%c\n", ans[a+b+c+d]);
	}
}