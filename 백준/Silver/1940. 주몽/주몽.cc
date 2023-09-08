#include<bits/stdc++.h>
using namespace std;

int n, m, a;
int A[10000010];
int ans;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		A[a]++;
	}
	if(m%2==0) ans+=A[m/2]/2, A[m/2]=0;
	for(int i=1;i<=m/2;i++)
	{
		ans+=min(A[i], A[m-i]);
	}
	printf("%d", ans);
}