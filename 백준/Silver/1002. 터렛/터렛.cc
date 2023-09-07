#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long x1, y1, r1, x2, y2, r2, n, r;
	scanf("%lld", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld%lld%lld%lld%lld%lld", &x1, &y1, &r1, &x2, &y2, &r2);
		r=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		if(r==0&&r1==r2) puts("-1");
		else if(r==(r1-r2)*(r1-r2)||r==(r1+r2)*(r1+r2)) puts("1");
		else if(r>(r1-r2)*(r1-r2)&&r<(r1+r2)*(r1+r2)) puts("2");
		else puts("0");
	}
}