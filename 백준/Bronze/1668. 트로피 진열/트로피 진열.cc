#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	{
		int m = 0, ans = 0;
		for(int i=0;i<n;i++)
		{
			if(m<a[i])
			{
				m = a[i];
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	{
		int m = 0, ans = 0;
		for(int i=n-1;i>=0;i--)
		{
			if(m<a[i])
			{
				m = a[i];
				ans++;
			}
		}
		printf("%d\n", ans);
	}
}