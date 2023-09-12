#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a, b, c, d, e, f;
		cin>>a>>b>>c>>d>>e>>f;
		printf("%d\n", abs(d-a)+abs(e-b)+c+f);
	}
}