#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		int a, b, c;
		scanf("%d", &a);
		if(a==0) return 0;
		scanf("%d%d", &b, &c);
		if(a*a*4>=b*b+c*c) printf("Pizza %d fits on the table.\n", cnt);
		else printf("Pizza %d does not fit on the table.\n", cnt);
	}
}