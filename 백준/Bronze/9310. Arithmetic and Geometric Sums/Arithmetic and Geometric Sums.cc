#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n, a, b, c;
		scanf("%d", &n);
		if(n==0) return 0;
		scanf("%d%d%d", &a, &b, &c);
		if(b*b==a*c)
		{
			int r=b/a;
			int rn=1;
			for(int i=1;i<=n;i++)
			{
				rn*=r;
			}
			if(r==1) printf("%d\n", a*n);
			else printf("%d\n", a*(rn-1)/(r-1));
		}
		else
		{
			int d=b-a;
			printf("%d\n", n*(2*a+(n-1)*d)/2);
		}
	}
}