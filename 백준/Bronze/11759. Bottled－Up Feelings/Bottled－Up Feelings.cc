#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	for(int i=a/b;i>=0;i--)
	{
		if((a-b*i)%c==0)
		{
			printf("%d %d", i, (a-b*i)/c);
			return 0;
		}
	}
	printf("Impossible");
	return 0;
}