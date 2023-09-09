#include<bits/stdc++.h>
using namespace std;

int a[11], b[11];

int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, a+10);
	
	for(int i=0;i<10;i++)
	{
		scanf("%d", &b[i]);
	}
	sort(b, b+10);
	printf("%d %d", a[9]+a[8]+a[7], b[7]+b[8]+b[9]);
}
