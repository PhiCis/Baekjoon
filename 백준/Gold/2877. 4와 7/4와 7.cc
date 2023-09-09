#include<bits/stdc++.h>
using namespace std;

void f(int n)
{
	if(n<=0) return;
	if(n%2==0)
	{
		f((n>>1)-1);
		printf("7");
	}
	else
	{
		f((n>>1));
		printf("4");
	}
}

int main()
{
	
	int n;
	scanf("%d", &n);
	f(n);
}