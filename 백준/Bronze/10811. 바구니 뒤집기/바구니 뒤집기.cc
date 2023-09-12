#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, l, r;
	scanf("%d%d", &n, &k);
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		v[i]=i+1;
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d%d", &l, &r);
		l--;r--;
		for(int j=l;j<l+r-j;j++)
		{
			swap(v[j], v[l+r-j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ", v[i]);
	}
}