#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, c[11];
	while(cin>>n)
	{
		for(long long i=0;i<10;i++)
		{
			c[i]=0;
		}
		long long k=1;
		while(1)
		{
			long long tmp=n*k;
			while(tmp)
			{
				c[tmp%10]=1;
				tmp/=10;
			}
			for(long long i=0;i<10;i++)
			{
				if(c[i]==0)
				{
					goto skip;
				}
			}
			printf("%lld\n", k);
			goto next;
			skip:;
			k++;
		}
		next:;
	}
}