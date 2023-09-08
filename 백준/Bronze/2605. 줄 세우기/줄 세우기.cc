#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a;
		scanf("%d", &a);
		v.insert(v.end()-a, i);
	}
	for(int j:v)
	{
		printf("%d ", j);
	}
	
}