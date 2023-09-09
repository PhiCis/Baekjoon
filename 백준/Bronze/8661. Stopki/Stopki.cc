#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x, k, a;
	scanf("%d%d%d", &x, &k, &a);
	x%=(k+a);
	if(x-k<0) printf("1");
	else printf("0");
}