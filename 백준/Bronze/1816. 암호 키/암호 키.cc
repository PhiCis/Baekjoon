#include<bits/stdc++.h>

using namespace std;

bool p[1000010];
vector<long long> v;
long long n;
long long a;
int main()
{
	p[2]=1;
	for(int i=3;i<=1000000;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i*i<=1000000;i+=2)
	{
		for(int j=i*i;j<=1000000;j+=2*i)
		{
			p[j]=0;
		}
	}
	for(int i=1;i<=1000000;i++)
	{
		if(p[i]) v.push_back(i);
	}
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a);
		for(auto j:v)
		{
			if(a%j==0)
			{
				printf("NO\n");
				goto skip;
			}
		}
		printf("YES\n");
		skip:;
	}
}