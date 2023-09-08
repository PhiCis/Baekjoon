#include<bits/stdc++.h>
using namespace std;

int f(int n)
{
	int ret = 0;
	vector<int> a(10, 0);
	while(n)
	{
		a[n%10]=1;
		n/=10;
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]) ret++;
	}
	return ret;
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", f(n));
	}
}