#include<bits/stdc++.h>
using namespace std;

int d[4][2]={-2, 1, -2, -1, -1, -2, 1, -2};
int n, k;
int x[300030], y[300030];

int f(int a, int b)
{
	int A = (a-1)/4;
	int B = (b-1)/4;
	
	if(A != (n-1)/4 && B != (n-1)/4)
	{
		if((a-1)%4<2 && (b-1)%4<2) return (A+B)*2;
		if((a-1)%4>=2 && (b-1)%4>=2 && (a%4!=3 || b%4!=3)) return (A+B)*2+3;
		else return (A+B)*2+1;
	}
	if(n%4==0)
	{
		if((a-1)%4<2 && (b-1)%4<2) return (A+B)*2;
		if(A<B && a%4==0 && (b-1)%4>=2) return (A+B)*2+3;
		if(A>B && b%4==0 && (a-1)%4>=2) return (A+B)*2+3;
		if(A==B && a%4==0 && b%4==0) return (A+B)*2+2;
		return (A+B)*2+1;
	}
	if(n%4==1)
	{
		if(a==n && b==n) return n-1;
		if(a==n && b==n-1) return n-2;
		if(a==n-1 && b==n) return n-2;
		return (A+B)*2;
	}
	if(n%4==3 || n%4==2)
	{
		if((a-1)%4<2 && (b-1)%4<2) return (A+B)*2;
		if((a-1)%4>=2 && (b-1)%4>=2 && (a%4!=3 || b%4!=3)) return (A+B)*2+3;
		else return (A+B)*2+1;
	}
}

int main()
{
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			printf("%2d ", f(i, j));
//		}
//		printf("\n");
//	}
//	printf("\n");
	
	scanf("%d%d", &k, &n);
	int tmp = 0;
	for(int i=1;i<=k;i++)
	{
		scanf("%d%d", &x[i], &y[i]);
		tmp = max(tmp, f(x[i], y[i]));
	}
	
	if(tmp%2==0)
	{
		printf("NO");
		return 0;
	}
	
	printf("YES\n");
	for(int i=1;i<=k;i++)
	{
		bool flag = false;
		for(int j=0;j<4;j++)
		{
			int ni = x[i]+d[j][0];
			int nj = y[i]+d[j][1];
			if(ni<=0||nj<=0||ni>n||nj>n) continue;
			
			if(f(ni, nj) + 1 == f(x[i], y[i]))
			{
				printf("%d %d\n", ni, nj);
				flag = true;
				break;
			}
		}
		assert(flag);
	}
	
}