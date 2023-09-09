#include<bits/stdc++.h>
using namespace std;

int a[100];

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
			if(a[i]==a[i-1]) continue;
			else printf("%d ", a[i]);
		}
		printf("$\n");
	}
}