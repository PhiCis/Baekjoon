#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(1)
	{
		scanf("%d", &n);
		if(n==0) return 0;
		int ans=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0) ans+=i;
		}
		if(ans==n)
		{
			printf("%d PERFECT\n", n);
		}
		if(ans<n)
		{
			printf("%d DEFICIENT\n", n);
		}
		if(ans>n)
		{
			printf("%d ABUNDANT\n", n);
		}
	}
}