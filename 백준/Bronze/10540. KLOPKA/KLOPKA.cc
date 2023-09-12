#include<bits/stdc++.h>
using namespace std;

int m1=100, m2=100, M1, M2;

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		m1=min(m1, a);
		M1=max(M1, a);
		m2=min(m2, b);
		M2=max(M2, b);
	}
	int tmp=max(M1-m1, M2-m2);
	printf("%d", tmp*tmp);
}