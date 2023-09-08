#include<bits/stdc++.h>
using namespace std;

int n, l;
int main()
{
	scanf("%d%d", &n, &l);
	for(int i=l;i<=100;i++)
	{
		if(i&1)
		{
			if(n%i==0)
			{
				if(n/i-i/2<0) continue;
				for(int j=n/i-i/2;j<=n/i+i/2;j++)
				{
					printf("%d ", j);
				}
				return 0;
			}
		}
		else
		{
			if(n%(i/2)==0&&n%i!=0)
			{
				if(n/i-i/2+1<0) continue;
				for(int j=n/i-i/2+1;j<=n/i+i/2;j++)
				{
					printf("%d ", j);
				}
				return 0;
			}	
		}
	}
	printf("-1");
}