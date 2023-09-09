#include<bits/stdc++.h>
using namespace std;

int n, a[1025];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<(1<<n);i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=1;j<(1<<n);j++)
		{
			if(j%(1<<i)==0&&j%(1<<(i+1))!=0)
			{
				printf("%d ", a[j]);
			}
		}
		printf("\n");
	}
}