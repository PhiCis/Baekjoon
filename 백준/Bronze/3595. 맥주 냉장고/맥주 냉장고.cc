#include<bits/stdc++.h>
using namespace std;

int ans=1e9, n, ans1, ans2, ans3;

int main()
{
	scanf("%d", &n);
	for(int i=1;i*i*i<=n;i++)
	{
		if(n%i==0)
		{
			int a=i;
			int m=n/i;
			for(int j=1;j*j<=m;j++)
			{
				if(m%j==0)
				{
					int b=j;
					int c=m/j;
					if(a*b+a*c+b*c<ans)
					{
						ans=a*b+a*c+b*c;
						ans1=a, ans2=b, ans3=c;
					}
				}
			}
		}
	}
	printf("%d %d %d\n", ans1, ans2, ans3);
}