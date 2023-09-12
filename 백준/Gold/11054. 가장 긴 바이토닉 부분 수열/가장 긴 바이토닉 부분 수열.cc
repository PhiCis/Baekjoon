#include<bits/stdc++.h>
using namespace std;

int N, A[1010], DP1[1010], DP2[1010], ans;
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &A[i]);
	}
	for(int i=1;i<=N;i++)
	{
		DP1[i]=1;
		for(int j=1;j<i;j++)
		{
			if(A[j]<A[i])
			{
				DP1[i]=max(DP1[i], DP1[j]+1);
			}
		}
	}
	for(int i=N;i>=1;i--)
	{
		DP2[i]=1;
		for(int j=N;j>i;j--)
		{
			if(A[j]<A[i])
			{
				DP2[i]=max(DP2[i], DP2[j]+1);
			}
		}
	}
	for(int i=1;i<=N;i++)
	{
		ans=max(ans, DP1[i]+DP2[i]-1);
	}
	printf("%d", ans);
}