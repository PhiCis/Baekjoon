#include<bits/stdc++.h>
using namespace std;

int t, n, flag;

int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		if(n==1)
		{
			printf("1\n");
			continue;
		}
		int cnt=0;
		while(1)
		{
			flag=0;
			for(int i=9;i>=2;i--)
			{
				if(n%i==0)
				{
					n/=i;
					cnt++;
					flag++;
					break;
				}
			}
			if(n==1)
			{
				printf("%d\n", cnt);
				break;
			}
			if(flag==0)
			{
				printf("-1\n");
				break;
			}
		}
	}
}