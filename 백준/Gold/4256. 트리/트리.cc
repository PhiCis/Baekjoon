#include<bits/stdc++.h>
using namespace std;

int T, n, a[1010], b[1010];

void f(int s1, int e1, int s2, int e2)
{
	for(int i=s2;i<=e2;i++)
	{
		if(b[i]==a[s1])
		{
			f(s1+1, s1+i-s2, s2, i-1);
			f(s1+i-s2+1, e1, i+1, e2);
			printf("%d ", b[i]);
			break;
		}
	}
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &b[i]);
		}
		f(1, n, 1, n);
		printf("\n");
	}
}