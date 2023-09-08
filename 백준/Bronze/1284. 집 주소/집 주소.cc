#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		int ans = 1;
		while(n)
		{
			if(n%10==0) ans+=5;
			else if(n%10==1) ans+=3;
			else ans+=4;
			n/=10;
		}
		printf("%d\n", ans);
	}
}