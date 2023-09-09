#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans = 0;
	scanf("%d", &n);
	for(int i=1;i*i<n;i++)
	{
		if(n%i==0)
		{
			int j = n/i;
			if(!((i^j)&1)) ans++;
		}
	}
	printf("%d", ans);
}