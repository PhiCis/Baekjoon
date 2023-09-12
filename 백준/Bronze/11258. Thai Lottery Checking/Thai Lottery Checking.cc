#include<bits/stdc++.h>
using namespace std;

int a[10], b[10];

int main()
{
	for(int i=1;i<=6;i++)
	{
		scanf("%d%d", &a[i], &b[i]);
	}
	while(1)
	{
		int c, ans=0;
		scanf("%d", &c);
		if(c==-1) return 0;
		if(c==a[1]) ans+=b[1];
		if(c/1000==a[2]) ans+=b[2];
		if(c/1000==a[3]) ans+=b[3];
		if(c%1000==a[4]) ans+=b[4];
		if(c%1000==a[5]) ans+=b[5];
		if(c%100==a[6]) ans+=b[6];
		printf("%d\n", ans);
	}
}