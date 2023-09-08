#include<bits/stdc++.h>
using namespace std;

int a, m=-1, maxi, maxj;

int main()
{
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			scanf("%d", &a);
			if(a>m)
			{
				m = a;
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("%d\n%d %d", m, maxi, maxj);
}