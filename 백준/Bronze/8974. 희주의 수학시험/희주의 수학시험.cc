#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	for(int i=1;i<=100;i++)
	{
		for(int j=0;j<i;j++)
		{
			v.push_back(i);
		}
	}
	int a, b, ans = 0;
	scanf("%d%d" , &a, &b);
	for(int i=a;i<=b;i++)
	{
		ans+=v[i-1];
	}
	printf("%d", ans);
}