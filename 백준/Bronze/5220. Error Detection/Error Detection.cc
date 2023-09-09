#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d%d", &a, &b);
		int cnt=0;
		while(a)
		{
			if(a&1)
			{
				cnt++;
			}
			a>>=1;
		}
		if(cnt%2==b)
		{
			printf("Valid\n");
		}
		else
		{
			printf("Corrupt\n");
		}
	}
}