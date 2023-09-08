#include<bits/stdc++.h>
using namespace std;

int A[13]={0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

int main()
{
	while(1)
	{
		int ans=0, a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		if(a==0&&b==0&&c==0) return 0;
		if((c%4==0&&(c%100!=0||c%400==0))&&b>=3) ans++;
		ans+=A[b]+a;
		printf("%d\n", ans);
	}
	
}