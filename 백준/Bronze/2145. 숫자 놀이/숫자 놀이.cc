#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		printf("%d\n", (n-1)%9+1);
	}
}