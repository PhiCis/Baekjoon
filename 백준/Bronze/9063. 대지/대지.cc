#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, mx=11111, my=11111, Mx=-11111, My=-11111;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		mx = min(a, mx);
		my = min(b, my);
		Mx = max(a, Mx);
		My = max(b, My);
	}
	printf("%d", (Mx-mx)*(My-my));
}