#include<bits/stdc++.h>
using namespace std;

int a, b;

bool isprime(int p)
{
	if(p==1) return false;
	if(p==2) return true;
	if(p%2==0) return false;
	for(int i=3;i*i<=p;i+=2)
	{
		if(p%i==0) return false;
	}
	return true;
}

int main()
{
	scanf("%d%d", &a, &b);
	if(isprime(a)&&isprime(a+b*1000000)) printf("Yes");
	else printf("No");
}