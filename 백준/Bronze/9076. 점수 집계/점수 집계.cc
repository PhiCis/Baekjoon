#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a[10];
		for(int i=0;i<5;i++)
		{
			scanf("%d", &a[i]);
		}
		sort(a, a+5);
		if(a[3]-a[1]>3) printf("KIN\n");
		else printf("%d\n", a[1]+a[2]+a[3]);
	}
}