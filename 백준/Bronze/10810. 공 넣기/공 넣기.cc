#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, a, b, c;
	scanf("%d%d", &n, &k);
	vector<int> A(n+1);
	for(int i=0;i<k;i++)
	{
		scanf("%d%d%d", &a, &b, &c);
		for(int j=a;j<=b;j++)
		{
			A[j]=c;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ", A[i]);
	}
}