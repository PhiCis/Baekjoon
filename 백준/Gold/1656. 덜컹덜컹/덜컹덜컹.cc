#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		int ANS = 2e9;
		int a[60];
		scanf("%d", &n);
		if(n==0) return 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<=i+(n-1)/2;j++)
			{
				for(int k=j+1;k<=j+(n-1)/2;k++)
				{
					if((i-k+n)%n<=(n-1)/2)
					{
						int m = min({a[i], a[j%n], a[k%n]});
						int ans = 0;
						for(int l=0;l<n;l++)
						{
							ans+=max(0, a[l]-m);
						}
						ANS = min(ANS, ans);
					}
				}
			}
		}
		if(n%2==0)
		{
			for(int i=0;i<n/2;i++)
			{
				int m = min(a[i], a[i+n/2]);
				int M1 = 0;
				int M2 = 0;
				for(int j=i+1;j<i+n/2;j++)
				{
					M1 = max(M1, a[j%n]);
				}
				for(int j=i+n/2+1;j<i+n;j++)
				{
					M2 = max(M2, a[j%n]);
				}
				m=min({m, M1, M2});
				int ans = 0;
				for(int l=0;l<n;l++)
				{
					ans+=max(0, a[l]-m);
				}
				ANS = min(ANS, ans);
			}
		}
		printf("%d\n\n", ANS);
	}
}