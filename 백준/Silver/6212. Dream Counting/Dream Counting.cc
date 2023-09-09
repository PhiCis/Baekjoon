#include<bits/stdc++.h>
using namespace std;

int n, m, c[10];
int main()

{
	scanf("%d%d", &n, &m);
	for(int i=n;i<=m;i++)
	{
		int tmp=i;
		while(tmp)
		{
			c[tmp%10]++;
			tmp/=10;
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("%d ", c[i]);
	}
}