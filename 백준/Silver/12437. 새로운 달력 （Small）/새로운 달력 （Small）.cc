#include<bits/stdc++.h>
using namespace std;

int t, a, b, c;
int ans;

int main()
{
	scanf("%d", &t);
	for(int j=1;j<=t;j++)
	{
		ans=0;
		scanf("%d%d%d", &a, &b, &c);
		for(int i=1;i<=a*b;i++)
		{
			if(i%c==1%c||i%b==1%b) ans++;
		}
		printf("Case #%d: %d\n",j, ans);
	}
}