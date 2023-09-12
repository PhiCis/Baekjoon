#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(c&1)
	{
		printf("%d", a^b);
	}
	else printf("%d", a);
}