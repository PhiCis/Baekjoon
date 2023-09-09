#include<bits/stdc++.h>
using namespace std;

int t, A, B, C, a[100], b[100], c[100];

bool f(int a)
{
	while(a)
	{
		if(a%10!=5&&a%10!=8) return false;
		a/=10;
	}
	return true;
}
int main()
{
	scanf("%d", &t);
	while(t--)
	{
		map<int, int> m;
		scanf("%d", &A);
		for(int i=1;i<=A;i++)
		{
			scanf("%d", &a[i]);
		}
		scanf("%d", &B);
		for(int i=1;i<=B;i++)
		{
			scanf("%d", &b[i]);
		}
		scanf("%d", &C);
		for(int i=1;i<=C;i++)
		{
			scanf("%d", &c[i]);
		}
		for(int i=1;i<=A;i++)
		{
			for(int j=1;j<=B;j++)
			{
				for(int k=1;k<=C;k++)
				{
					if(f(a[i]+b[j]+c[k])) m[a[i]+b[j]+c[k]]++;
				}
			}
		}
		printf("%d\n", m.size());
	}
}