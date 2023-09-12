#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, cnt=0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			if(n%i==0) cnt++;
		}
		printf("%d %d\n", n, cnt);
	}
}