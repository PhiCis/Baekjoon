#include<bits/stdc++.h>
using namespace std;

int a, b;
bool f(int n)
{
	if(n-n/a==b) return true;
	else return false;
}

int main()
{
	scanf("%d%d", &a, &b);
	for(int i=1;i<=3*b;i++)
	{
		if(!f(i)&f(i+1))
		{
			printf("%d ", i+1);
		}
		if(f(i)&(!f(i+1)))
		{
			printf("%d", i);
		}
	}
}