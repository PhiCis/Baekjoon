#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k, n;
	scanf("%d", &k);
	scanf("%d", &n);
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		int a;
		char b;
		scanf("%d %c", &a, &b);
		if(ans+a>=210)
		{
			printf("%d", k);
			return 0;
		}
		ans+=a;
		if(b=='T')
		{
			k++;
			if(k==9) k=1;
		}
	}
}