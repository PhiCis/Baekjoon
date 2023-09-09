#include<bits/stdc++.h>
using namespace std;

int n, ans;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int a, b, c;
		scanf("%d:%d%d", &a, &b, &c);
		a=a*60+b;
		for(int j=0;j<c;j++)
		{
			if(a+j>=7*60 && a+j<19*60) ans+=10;
			else ans+=5;
		}
	}
	printf("%d", ans);
}