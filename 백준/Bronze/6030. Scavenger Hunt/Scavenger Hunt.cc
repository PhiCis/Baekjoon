#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	vector<int> v, v2;
	scanf("%d%d", &a, &b);
	for(int i=1;i<=a;i++)
	{
		if(a%i==0) v.push_back(i);
	}
	for(int i=1;i<=b;i++)
	{
		if(b%i==0) v2.push_back(i);
	}
	for(auto i:v)
	{
		for(auto j:v2)
		{
			printf("%d %d\n", i, j);
		}
	}
}