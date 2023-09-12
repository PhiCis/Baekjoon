#include<bits/stdc++.h>
using namespace std;

bool f(int k)
{
	if(k<2) return false;
	if(k==2) return true;
	if(k%2==0) return false;
	for(int i=3;i*i<=k;i+=2)
	{
		if(k%i==0) return false;
	}
	return true;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int k;
		scanf("%d", &k);
		for(int i=2;i<=k;i++)
		{
			for(int j=i;i+j<=k;j++)
			{
				if(f(i)&&f(j)&&f(k-i-j))
				{
					printf("%d %d %d\n", i, j, k-i-j);
					goto skip;
				}
			}
		}
		skip:;
	}
}