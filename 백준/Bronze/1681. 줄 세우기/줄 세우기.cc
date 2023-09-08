#include<bits/stdc++.h>
using namespace std;

int a, b, tmp=1;

int f(int tmp, int b)
{
	while(tmp)
	{
		if(tmp%10==b) return 1;
		tmp/=10;
	}
	return 0;
}

int main()
{
	scanf("%d%d", &a, &b);
	while(1)
	{
		if(f(tmp, b))
		{
			
		}
		else
		{
			a--;
			if(a==0)
			{
				printf("%d", tmp);
				return 0;
			}
		}
		tmp++;
	}
}