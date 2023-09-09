#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=0;
	scanf("%d", &n);
	for(int i=1;i<=1400;i++)
	{
		if(n>=(long long)i*(2*i*i+1)/3)
		{
			ans=i;
		}
	}
	printf("%d", ans);
}