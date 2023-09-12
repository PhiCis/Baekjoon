#include<bits/stdc++.h>
using namespace std;

int a[1000010];
int c[1000010];
int ans=1;
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==i)
		{
			printf("-1");
			return 0;
		}
	}
	printf("1000000007");
}