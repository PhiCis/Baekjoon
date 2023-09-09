#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b, ansa = 0, ansb = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a, &b);
		if(a>b) ansa++;
		if(a<b) ansb++;
	}
	printf("%d %d", ansa, ansb);
}