#include<bits/stdc++.h>
using namespace std;
map<int, int> M;
int n, m;
int A[200020], B[200020];
int ans; 
int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &A[i]);
		M[A[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &B[i]);
		M[B[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(M[A[i]]&1) ans++;
	}
	for(int i=1;i<=m;i++)
	{
		if(M[B[i]]&1) ans++;
	}
	printf("%d", ans);
}