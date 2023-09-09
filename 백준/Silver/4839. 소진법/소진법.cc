#include<bits/stdc++.h>
using namespace std;

long long n;
long long f[12]={1, 2, 6, 30, 210, 2310, 30030, 510510, 9699690, 223092870, 6469693230, 200560490130};
long long ans[12];
long long p[12]={0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
int main()
{
	while(1)
	{
		scanf("%lld", &n);
		if(!n) return 0;
		printf("%lld = ", n);
		for(int i=11;i>=0;i--)
		{
			ans[i]=n/f[i];
			n-=ans[i]*f[i];
		}
		bool flag=0;
		for(int i=0;i<=11;i++)
		{
			if(ans[i])
			{
				if(flag) printf(" + ");
				flag=1;
				printf("%lld", ans[i]);
				for(int j=1;j<=i;j++)
				{
					printf("*%lld", p[j]);
				}
			}
		}
		printf("\n");
	}
}