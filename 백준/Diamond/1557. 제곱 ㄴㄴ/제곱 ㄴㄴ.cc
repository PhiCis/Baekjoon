#include<bits/stdc++.h>
using namespace std;

int a[45045];
int k;
int ans=2e9;

void init()
{
	for(int i=2;i<=45000;i++)
	{
		for(int j=2;j*j<=i;j++)
		{
			if(i%(j*j)==0)
			{
				goto skip;
			}
			if(i%j==0)
			{
				a[i]=a[i/j]*(-1);
				goto skip;
			}
		}
		a[i]=1;
		skip:;
	}
}

int main()
{
	init();
	scanf("%d", &k);
	int s=k, e=2*k;
	while(s<=e)
	{
		int m=((long long)s+e)/2;
		int cnt=m;
		for(int i=2;i*i<=m;i++)
		{
			cnt-=m/(i*i)*a[i];
		}
		if(cnt>=k)
		{
			if(cnt==k)
			{
				ans=min(ans, m);
			}
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	printf("%d", ans);
}