#include<bits/stdc++.h>
using namespace std;
int n;
int a[10010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	if(prev_permutation(a+1, a+1+n))
	{
		for(int i=1;i<=n;i++)
		{
			printf("%d ", a[i]);
		}
	}
	else printf("-1");
}