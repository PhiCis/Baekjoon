#include<bits/stdc++.h>
using namespace std;

int a[3];

int main()
{
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	sort(a, a+3);
	for(int i=1;i<=3;i++)
	{
		char c;
		scanf(" %c", &c);
		if(c=='A') printf("%d ", a[0]);
		if(c=='B') printf("%d ", a[1]);
		if(c=='C') printf("%d ", a[2]);
	}
}