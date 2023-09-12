#include<bits/stdc++.h>
using namespace std;

int a, b;
map<pair<int ,int> , int> m;

int main()
{
	scanf("%d%d", &a, &b);
	for(int i=a;i<=b;i++)
	{
		for(int j=1;j<=i;j++)
		{
			m[{j/__gcd(j, i), i/__gcd(j, i)}]=1;
		}
	}
	printf("%d", m.size());
}