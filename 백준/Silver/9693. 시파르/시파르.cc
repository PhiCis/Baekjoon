#include<bits/stdc++.h>
using namespace std;

int n, i, ans;
int main()
{
	while(1)
	{
		ans=0;
		i++;
		scanf("%d" , &n);
		if(!n) return 0;
		printf("Case #%d: ", i);
		while(n)
		{
			ans+=n/5;
			n/=5;
		}
		printf("%d\n", ans);
	}
}