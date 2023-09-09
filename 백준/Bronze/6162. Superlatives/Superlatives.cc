#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		printf("Data Set %d:\n", i);
		if(a<=b)
		{
			printf("no drought\n\n");
			continue;
		}
		b*=5;
		while(a>b)
		{
			b*=5;
			printf("mega ");
		}
		printf("drought\n\n");
	}
}