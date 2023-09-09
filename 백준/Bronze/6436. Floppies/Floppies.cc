#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cnt = 0;
	while(1)
	{
		cnt++;
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		n = round(0.75*n);
		printf("File #%d\nJohn needs %d floppies.\n\n", cnt, (n-1)/1860000+1);
	}
}