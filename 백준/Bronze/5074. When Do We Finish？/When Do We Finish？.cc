#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b, c, d;
		scanf("%d:%d %d:%d", &a, &b, &c, &d);
		a=a*60+b; c=c*60+d;
		if(a==0&&c==0) return 0;
		a+=c;
		printf("%02d:%02d", a%1440/60, a%60);
		if(a>=1440)
		{
			printf(" +%d", a/1440);
		}
		printf("\n");
	}
}