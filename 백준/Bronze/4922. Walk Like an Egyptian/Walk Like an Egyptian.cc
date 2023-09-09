#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		int n;
		scanf("%d", &n);
		if(!n) return 0;
		printf("%d => %d\n", n, n*n-n+1);
	}
}