#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	int n;
	while(t--)
	{
		scanf("%d", &n);
		int ans=0;
		for(int i=1;i<n;i++)
		{
			if(n%i==0) ans+=i;
		}
		if(ans==n)
		{
			printf("%d is a perfect number.\n\n", n);
		}
		if(ans<n)
		{
			printf("%d is a deficient number.\n\n", n);
		}
		if(ans>n)
		{
			printf("%d is an abundant number.\n\n", n);
		}
	}
}