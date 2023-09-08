#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	vector<int> a(n);
	for(int i=0;i<n-1;i++)
	{
		char g;
		scanf("%d", &a[i]);
		scanf(" %c", &g);
	}
	scanf("%d", &a[n-1]);
	for(int i=0;i<k;i++)
	{
		vector<int> tmp(n-1-i);
		for(int j=1;j<n-i;j++)
		{
			tmp[j-1]=a[j]-a[j-1];
		}
		a.resize(n-1-i);
		a=tmp;
	}
	for(int i=0;i<a.size()-1;i++)
	{
		printf("%d,", a[i]);
	}
	printf("%d", a[a.size()-1]);
}