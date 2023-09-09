#include<bits/stdc++.h>
using namespace std;

int n1, n2, n3;

int main()
{
	scanf("%d%d%d", &n1, &n2, &n3);
	int M = max({n1, n2, n3});
	int best = 3*M;
	int m1 = M, m2 = 0, m3 = 0, m4 = 0;
	for(int i=0;i<=min(best/3, M);i++)
	{
		int m3m = max(0, (n2-i+1)/2);
		int m3M = max({(n2-i+1)/2, m3m, n3-i});
		for(int j=m3m;j<=min((best-3*i)/4, m3M);j++)
		{
			int m4m = max(0, (n3-i-j+1)/2);
			int m4M = max((n1-i-2*j+2)/3, m4m);
			for(int k=m4m;k<=m4M;k++)
			{
				int l=max(0, n1-i-2*j-3*k);
				int ans = 3*i+l+4*j+5*k;
				if(ans<best)
				{
					best = ans;
					m1=i;
					m2=l;
					m3=j;
					m4=k;
				}
			}
		}
	}
	printf("%d %d %d %d", 3*m1, m2, 4*m3, 5*m4);
 } 