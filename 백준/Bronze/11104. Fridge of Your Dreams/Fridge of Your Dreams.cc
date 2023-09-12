#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int ans=0;
		for(int j=23;j>=0;j--)
		{
			char a;
			scanf(" %c", &a);
			if(a=='1') ans+=(1<<j);
		}
		printf("%d\n", ans);
	}
}