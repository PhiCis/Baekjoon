#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		int a;
		scanf("%d", &a);
		if(a==0) return 0;
		printf("%d. ", cnt);
		a*=3;
		printf(a&1?"odd ":"even ");
		a>>=1;
		a*=3;
		a/=9;
		printf("%d\n", a);
	}
}