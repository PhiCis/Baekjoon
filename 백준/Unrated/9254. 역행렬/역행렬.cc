#include<bits/stdc++.h>
using namespace std;
int N;
double A[510][1020];
void SWAP(int i1, int i2)
{
	double tmp;
	for(int j=1;j<=2*N;j++)
	{
		tmp=A[i1][j];
		A[i1][j]=A[i2][j];
		A[i2][j]=tmp;
	}
}
int main()
{
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		A[i][i+N]=1;
		for(int j=1;j<=N;j++)
		{
			scanf("%lf", &A[i][j]);
		}
	}
	for(int i=1;i<=N;i++)
	{
		if(A[i][i]==0.0)
		{
			for(int j=i+1;j<=N;j++)
			{
				if(A[j][i]!=0.0)
				{
					SWAP(i, j);
					goto skip;
				}
			}
			printf("no inverse");
			return 0;
skip:;
		}
		for(int j=2*N;j>=i;j--)
		{
			A[i][j]/=A[i][i];
		}
		for(int j=i+1;j<=N;j++)
		{
			for(int k=2*N;k>=i;k--)
			{
				A[j][k]-=A[j][i]*A[i][k];
			}
		}
	}
	
	for(int i=N;i>1;i--)
	{
		for(int j=i-1;j>=1;j--)
		{
			for(int k=2*N;k>=i;k--)
			{
				A[j][k]-=A[j][i]*A[i][k];
			}
		}
	}
	
	for(int i=1;i<=N;i++)
	{
		for(int j=N+1;j<=2*N;j++)
		{
			printf("%lf ", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}