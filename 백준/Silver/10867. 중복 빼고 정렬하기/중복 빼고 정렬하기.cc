#include<bits/stdc++.h>
using namespace std;
int n, a[100010];
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(i>1&&a[i]==a[i-1]) continue;
		printf("%d ", a[i]);
	}
}