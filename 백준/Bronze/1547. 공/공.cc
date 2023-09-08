#include<bits/stdc++.h>
using namespace std;

int a[3]={1, 0, 0};
int m, b, c;

int main()
{
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d", &b, &c);
		swap(a[b-1], a[c-1]);
	}
	for(int i=0;i<3;i++)
	{
		if(a[i]==1)
		{
			printf("%d", i+1);
		}
	}
}