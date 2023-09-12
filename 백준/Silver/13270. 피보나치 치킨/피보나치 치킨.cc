#include<bits/stdc++.h>
using namespace std;

int n;

int main()
{
	scanf("%d", &n);
	if(n==2) printf("1 1");
	else if(n==3) printf("2 2");
	else if(n==4) printf("2 2");
	else if(n==5) printf("3 3");
	else
	{
		int ans1=0, ans2=0;
		ans1 += (n - 6)/6 * 3;
		ans2 += (n - 6)/6 * 4;
		if(n%6==0) ans1 += 3, ans2 += 4;
		if(n%6==1) ans1 += 4, ans2 += 4;
		if(n%6==2) ans1 += 4, ans2 += 5;
		if(n%6==3) ans1 += 5, ans2 += 6;
		if(n%6==4) ans1 += 5, ans2 += 6;
		if(n%6==5) ans1 += 6, ans2 += 7;
		printf("%d %d", ans1, ans2);
	}
}