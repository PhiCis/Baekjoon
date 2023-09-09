#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if(a==0&&b==0) return 0;
		a-=b;
		if(a<=1) printf("%d %d\n", 0, 0);
		else if(a&1) printf("%d %d\n", a-3>>1, 1);
		else printf("%d %d\n", a>>1, 0); 
	}
}