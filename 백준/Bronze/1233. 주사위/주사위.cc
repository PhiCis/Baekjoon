#include<bits/stdc++.h>
using namespace std;

int ans[100];
int m, mi;

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=b;j++)
		{
			for(int k=1;k<=c;k++)
			{
				ans[i+j+k]++;
			}
		}
	}
	for(int i=0;i<100;i++)
	{
		if(m<ans[i])
		{
			m=ans[i];
			mi=i;
		}
	}
	printf("%d", mi);
}