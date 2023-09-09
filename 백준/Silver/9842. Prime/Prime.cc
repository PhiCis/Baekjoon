#include<bits/stdc++.h>
using namespace std;
bool p[1000010];

int main()
{
	p[2]=1;
	for(int i=3;i<=1000000;i+=2) p[i]=1;
	for(int i=3;i*i<=1000000;i+=2)
	{
		for(int j=i*i;j<=1000000;j+=2*i)
		{
			p[j]=0;
		}
	}
	int n;
	scanf("%d", &n);
	for(int i=1;i<=1000000;i++)
	{
		if(p[i])
		{
			n--;
			if(n==0)
			{
				printf("%d", i);
				return 0;
			}
		}
	}
}