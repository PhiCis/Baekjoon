#include<bits/stdc++.h>
using namespace std;

int a[11];

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		for(int i=1;i<=10;i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a+1, a+11);
		printf("%d\n", a[8]);
	}
}